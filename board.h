#define BOARDSTATUS_OK		1 //���� 1�̸� OK 
#define BOARDSTATUS_NOK		0//���� 0�̸� Not ok, =�ļ�

int board_initboard(void);
int board_printBoardStatus(void);

int board_getBoardCoin(int pos);
int board_getSharkPosition(void);

int board_stepShark(void);
int board_getBoardStatus(int pos);
