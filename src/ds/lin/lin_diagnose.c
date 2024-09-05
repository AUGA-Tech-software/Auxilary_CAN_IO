#include "lin_diagnose.h"

uint8_t mgl_lin_dig_request_sid = 0x00;
uint8_t mgl_pending_negative_response_code = 0x00;
uint8_t mgl_lin_pos_resp_user_pci = 0x00;
uint8_t mgl_fci_internal_fault_table_counter = 0;
uint8_t mgl_fci_internal_fault_table_filled_number = 0;

uint8_t mgl_lin_resp_user_data[DIAG_RESP_DATA_BUFFER_SIZE] = { 0 };

void lin_diag_master_request(uint8_t lin_module)
{

	ext_current_slave_state[lin_module] = SLAVE_STATE_IDLE;
}

uint8_t lin_diag_slave_response(uint8_t lin_module)
{
	uint8_t ret_status = LIN_STATE_ERROR;

	(void)lin_module;





	return ret_status;
}

