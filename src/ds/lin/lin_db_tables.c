

#include "lin_db_tables.h"

#ifndef CONVERT_BIT_TO_BYTE_SIZE
#define CONVERT_BIT_TO_BYTE_SIZE(bit_size)     (1)
#endif

uint8_t ext_dyn_lin_bux_max = LIN_BUS_MAX;
uint16_t ext_dyn_frame_counter_max = LIN_ENUM_FRM_MAX;
uint16_t ext_dyn_dp_counter_max = LIN_DP_MAX;

uint8_t ext_dyn_lin_msg_queue_size = LIN_MSG_QUEUE_SIZE;
uint8_t ext_dyn_lin_header_queue_size = LIN_HEADER_QUEUE_SIZE;

uint8_t ext_lin_response_error_flag[LIN_BUS_MAX] = { FALSE };    
uint8_t ext_lin_tx_frame_index[LIN_BUS_MAX];
uint8_t ext_ary_lin_test_frame_flag[LIN_ENUM_FRM_MAX];
uint8_t ext_ary_lin_timeout_flags[CONVERT_BIT_TO_BYTE_SIZE(LIN_ENUM_FRM_MAX)] = { 0 };

uint8_t ext_current_slave_state[LIN_BUS_MAX] = { SLAVE_STATE_IDLE };
uint8_t ext_pending_slave_response[LIN_BUS_MAX] = { SLAVE_RESP_NO_RESPONSE };

uint8_t ext_dyn_lin_route_gw_max = LIN_GW_DB_MAX;

uint8_t ext_dyn_lin_rx_len[LIN_BUS_MAX];     
uint8_t ext_dyn_rx_lin_cnt[LIN_BUS_MAX];     

uint8_t ext_dyn_lin_tx_state[LIN_BUS_MAX] = { LIN_TX_IDLE };
uint8_t ext_dyn_lin_rx_state[LIN_BUS_MAX] = { LIN_RX_IDLE };

uint8_t ext_dyn_lin_rx_timeout[LIN_BUS_MAX] = { 1 };
uint8_t ext_dyn_lin_tx_frame_data_counter[LIN_BUS_MAX] = { 0 };
uint8_t ext_dyn_rx_lin_frame_index[LIN_BUS_MAX];
uint8_t ext_dyn_rx_lin_diag_response[LIN_BUS_MAX] = { FALSE };
uint8_t ext_dyn_tx_data_counter[LIN_BUS_MAX] = { 0 };

struct_lin_rx_msg_type ext_dyn_lin_rx_message[LIN_BUS_MAX];

uint8_t ext_dyn_ary_lin_frame_req_rx_flag[LIN_ENUM_FRM_MAX] = { 0 };

uint8_t* ext_dyn_mgl_lin_tx_data_ptr[LIN_BUS_MAX];

uint16_t ext_dyn_crc_sum[LIN_BUS_MAX];

uint32_t ext_dyn_lin_timer_rx_timeout[LIN_BUS_MAX];

struct_lin_rx_msg_type  ext_dyn_lin_rx_msg_queue[LIN_BUS_MAX][LIN_MSG_QUEUE_SIZE];

uint8_t  ext_dyn_lin_rx_msg_queue_read[LIN_BUS_MAX] = { 0 };
uint8_t  ext_dyn_lin_rx_msg_queue_write[LIN_BUS_MAX] = { 0 };

uint8_t ext_dyn_lin_rx_header_queue[LIN_BUS_MAX][LIN_MSG_QUEUE_SIZE];

uint8_t ext_dyn_lin_rx_header_queue_read[LIN_BUS_MAX] = { 0 };
uint8_t ext_dyn_lin_rx_header_queue_write[LIN_BUS_MAX] = { 0 };

struct_lin_tx_msg_type ext_dyn_lin_tx_message[LIN_BUS_MAX];

uint8_t ext_dyn_lin_bus_sleep_flag[LIN_BUS_MAX] = { TRUE };
uint8_t ext_dyn_lin_schedule_line_index[LIN_BUS_MAX] = { 0 };

uint32_t ext_dyn_lin_schedule_timer[LIN_BUS_MAX];
uint32_t ext_dyn_lin_auto_sleep_timer[LIN_BUS_MAX];


volatile const struct_lin_datapoint_db_const_type lin_datapoint_db_const[LIN_DP_MAX];

struct_lin_bus_db_type ext_lin_bus_db[LIN_BUS_MAX];

struct_lin_route_gateway_db_type ext_lin_route_gateway_db[1];

struct_lin_frame_db_type ext_lin_frame_db[] =
{
	{	LIN_BUS_0,     0x00,  0x00,         LIN_RX,     FALSE,        0,   (uint8_t*)0 },                                
};

volatile struct_lin_frame_sniffer_type ext_lin_sniffed_rx_frame_db[LIN_BUS_MAX] = { 0 };

const uint8_t lin_diag_product_id_aag[5] =
{
	0x00,  
	0x00,  
	0x00,  
	0x00,  
	0x00   
};

volatile const uint8_t* ext_ptr_ary_lin_diag_product_id[LIN_BUS_MAX] =
{
		&lin_diag_product_id_aag[0],
};

volatile const struct_lin_schedule_table_db_const_type lin_schedule_table_db_const[LIN_ST_MAX];


