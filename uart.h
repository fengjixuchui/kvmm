#pragma once

#include "type.h"
#include "vcpu.h"
#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>

struct uart {
    u8 data_reg;
    u8 irr_enable_reg;
    u8 irr_id_reg;
    u8 line_control_reg;
    u8 modem_control_reg;
    u8 line_status_reg;
    u8 modem_status_reg;
    u8 scratch_reg;
};

void create_uart();
void emulate_uart_portw(struct vcpu *vcpu, int port, int count, int size);
void emulate_uart_portr(struct vcpu *vcpu, int port);
