# Auxilary-CAN-IO
 AUX IO through CAN bus


CAN MESSAGES:

{RECEIVE}

[AUXIO7_TCM_STATUS]\
ID=189C5A35h	// CAN0\
Type=Extended\
DLC=8\
CycleTime=100\
Var=STATUS_C3 unsigned 0,2 /p:0\
Var=STATUS_C2 unsigned 2,2 /p:0\
Var=STATUS_C1 unsigned 4,2 /p:0\
Var=STATUS_B1 unsigned 6,2 /p:0\
Var=STATUS_B8 unsigned 8,2 /p:0\
Var=STATUS_C8 unsigned 10,2 /p:0\
Var=STATUS_C7 unsigned 12,2 /p:0\
Var=STATUS_C6 unsigned 14,2 /p:0\
Var=STATUS_B6 unsigned 16,2 /p:0\
Var=STATUS_A6 unsigned 18,2 /p:0\
Var=STATUS_A5 unsigned 20,2 /p:0\
Var=STATUS_C4 unsigned 22,2 /p:0\
Var=STATUS_A4 unsigned 24,2 /p:0\
Var=STATUS_A3 unsigned 26,2 /p:0

[AUXIO_8_CURRENTS]\
ID=189B5A35h	// CAN0\
Type=Extended\
DLC=8\
CycleTime=100\
Var=CUR_C3 unsigned 0,8 /f:10 /u:mA /p:0\
Var=CUR_C2 unsigned 8,8 /f:10 /u:mA /p:0\
Var=CUR_C1 unsigned 16,8 /f:10 /u:mA /p:0\
Var=CUR_B1 unsigned 24,8 /f:10 /u:mA /p:0\
Var=CUR_B8 unsigned 32,8 /f:10 /u:mA /p:0\
Var=CUR_C8 unsigned 40,8 /f:10 /u:mA /p:0\
Var=CUR_C7 unsigned 48,8 /f:10 /u:mA /p:0\
Var=CUR_C6 unsigned 56,8 /f:10 /u:mA /p:0

{SEND}

[AUXIO6_TCM_CMD]\
ID=189D5A35h	// CAN0\
Type=Extended\
DLC=8\
CycleTime=100\
Var=CMD_C3 unsigned 0,2 /p:0\
Var=CMD_C2 unsigned 2,2 /p:0\
Var=CMD_C1 unsigned 4,2 /p:0\
Var=CMD_B1 unsigned 6,2 /p:0\
Var=CMD_B8 unsigned 8,2 /p:0\
Var=CMD_C8 unsigned 10,2 /p:0\
Var=CMD_C7 unsigned 12,2 /p:0\
Var=CMD_C6 unsigned 14,2 /p:0\
Var=CMD_B6 unsigned 16,2 /p:0\
Var=CMD_A6 unsigned 18,2 /p:0\
Var=CMD_A5 unsigned 20,2 /p:0\
Var=CMD_C4 unsigned 22,2 /p:0\
Var=CMD_A4 unsigned 24,2 /p:0\
Var=CMD_A3 unsigned 26,2 /p:0
