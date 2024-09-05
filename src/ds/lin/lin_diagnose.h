#ifndef _LIN_DIAGNOSE_H_
#define _LIN_DIAGNOSE_H_
#include "lin_stack.h"

#define NEGATIVE_RESPONSE_LEN       (uint8_t)0x03
#define NEGATIVE_RESPONSE_SID       (uint8_t)0x7F
#define DIAG_RESP_DATA_BUFFER_SIZE  (uint8_t)0x05

#define ASSIGN_NAD_SID                  (uint8_t)0xB0
#define ASSIGN_FRAME_IDENTIFIER_SID     (uint8_t)0xB1
#define READ_BY_DATA_IDENTIFIER_SID     (uint8_t)0xB2
#define WRITE_BY_DATA_IDENTIFIER_SID    (uint8_t)0x2E   

#define NRC_SUB_FUNCTION_NOT_SUPPORTED  (uint8_t)0x12

#define LIN_CONFIGURED_NAD (uint8_t)0x00
#define LIN_WILD_CARD_ID   (uint8_t)0x7F

void lin_diag_master_request(uint8_t lin_module);

uint8_t lin_diag_slave_response(uint8_t lin_module);

#endif

