#ifndef _CAN_DB_TABLES_H_
#define _CAN_DB_TABLES_H_


/*--------------------------------------------------------------------------*/
/** \file     can_db_tables.h
*   \brief    CAN bus database
*
*   \date     20240905
*   \author   ParameterTool
*
*   \platform HCS08DZ / HCS12XE / HCS12XD / HCS12P
* --------------------------------------------------------------------------
*   \defgroup Name      can_tables
* --------------------------------------------------------------------------*/



// Change the Baudrate either to extended mode or a fix rate from the list below:
#define CAN_BAUDRATE BIOS_CAN_EXT_BAUDRATE
// einstellbare BAUDRATEN
// BIOS_CAN_EXT_BAUDRATE
// BIOS_CAN_1MBIT
// BIOS_CAN_800KBIT
// BIOS_CAN_500KBIT
// BIOS_CAN_250KBIT
// BIOS_CAN_125KBIT
// BIOS_CAN_100KBIT
// BIOS_CAN_83_33KBIT
// BIOS_CAN_50KBIT
// BIOS_CAN_33_33KBIT
// BIOS_CAN_20KBIT
// BIOS_CAN_10KBIT


#ifndef CAN_FD_GLOBAL_ENABLE
#define CAN_FD_GLOBAL_ENABLE 0
#endif




//SETTING FOR BIOS_CAN_EXT_BAUDRATE
#define  CAN_BAUDRATE_def_BEZEICHNUNG           125          
#define  CAN_BAUDRATE_def_sj                    2            
#define  CAN_BAUDRATE_def_pre                   4            
#define  CAN_BAUDRATE_def_t_seg1                13           
#define  CAN_BAUDRATE_def_t_seg2                2            
#define  CAN_BAUDRATE_def_source                0            
#define  CAN_BAUDRATE_def_t_propSeg             0            

// Activate the user-defined filter settings:
#define USER_CAN_FILTER_ACTIVE

#ifdef USER_CAN_FILTER_ACTIVE

    #define CAN0_FILTER_A 0x189D5A35
    #define CAN0_FILTER_B 0x189D5A35
    #define CAN0_MASK_A   0x0
    #define CAN0_MASK_B   0x0
    #define CAN0_MASK_DIVISION BIOS_CAN_ID_EXT_A_AND_B
    
    #define CAN1_FILTER_A 0x0
    #define CAN1_FILTER_B 0x0
    #define CAN1_MASK_A   0x0
    #define CAN1_MASK_B   0x0
    #define CAN1_MASK_DIVISION BIOS_CAN_ID_ALL_OPEN
    
#endif

//CAN_BUS_0:
#define CAN0_TX_FIFO_SIZE 20
#define CAN0_RX_FIFO_SIZE 20
//CAN_BUS_1:
#define CAN1_TX_FIFO_SIZE 20
#define CAN1_RX_FIFO_SIZE 20


// Datentypen
#define FLOAT   0x24
//#define W_FLOAT 0x24
#define ULONG   0x04
//#define W_ULONG 0x04
#define SLONG   0x14
#define UINT    0x02
//#define W_UINT  0x02
#define SINT    0x12
//#define M_SINT  0x12   // als MEMO-Feld in der Datenbank
//#define W_SINT  0x12
#define UBYTE   0x01
//#define W_UBYTE 0x01
#define SBYTE   0x11
//#define TEXT    0x01
//#define M_TEXT  0x01



#define IS_GW_INPUT      1
#define IS_NO_GW_INPUT   0


// Defines for initialization of CAN datapoints by EEPROM
#define CAN_NO_EEPROM_INIT 255
#define CAN_INIT_EEPROM_SIZE 20

#define CAN_CFG_BLOCK_MAX 3 /// < same value as #CAN_BLOCK_MAX  

typedef enum
{
    CAN_GATEWAY_DB_MAX           = 0          ,
 
}can_gateway_id;

/// Define CAN busses: All the possible CAN busses. Only use these busses in table #can_block_db_const
typedef enum
{
    CAN_BUS_0 = 0          ,
    CAN_BUS_1              ,
    CAN_BUS_MAX
} can_bus_id;



/// Define datapoints: Order must be the same as in table#can_datenpunkt_db_const
typedef enum
{
    CMD_C3 = 0           ,
    CMD_C2               ,
    CMD_C1               ,
    CMD_B1               ,
    CMD_B8               ,
    CMD_C8               ,
    CMD_C7               ,
    CMD_C6               ,
    STATUS_C3            ,
    STATUS_C2            ,
    STATUS_C1            ,
    STATUS_B1            ,
    STATUS_B8            ,
    STATUS_C8            ,
    STATUS_C7            ,
    STATUS_C6            ,
    STATUS_B6            ,
    STATUS_A6            ,
    CUR_C3               ,
    CUR_C2               ,
    CUR_C1               ,
    CUR_B1               ,
    CUR_B8               ,
    CUR_C8               ,
    CUR_C7               ,
    CUR_C6               ,
    STATUS_A5            ,
    STATUS_C4            ,
    STATUS_A4            ,
    STATUS_A3            ,
    CMD_B6               ,
    CMD_A6               ,
    CMD_A5               ,
    CMD_C4               ,
    CMD_A4               ,
    CMD_A3               ,
    STATUS_TEST          ,
    CAN_DP_MAX
             
}can_dp_id;



/// Define CAN blocks: Order must be the same as in table #can_block_db_const
typedef enum
{
    AUXIO6_TCM_CMD = 0          ,
    AUXIO7_TCM_STATUS           ,
    AUXIO_8_CURRENTS            ,
    CAN_BLOCK_MAX
 
} can_block_id;




/// Activate direct routing of CAN messages
//#define CAN_GW_MODE_ROUTE

#endif

