#define BOARDSTATUS_OK		1 //값이 1이면 OK 
#define BOARDSTATUS_NOK		0//값이 0이면 Not ok, =파손
#define N_BOARD		15
int board_initboard(void);
int board_printBoardStatus(void);

int board_getBoardCoin(int pos);
int board_getSharkPosition(void);

int board_stepShark(void);
int board_getBoardStatus(int pos);
