#define _CRT_SECURE_NO_WARNINGS 1

#include "game.h"
void menu()
{
	printf("************************\n");
	printf("**** 1.play 0. exit ****\n");
	printf("************************\n");
}
void game()
{
	char mine[ROWS][COLS] = { 0 };
	char show[ROWS][COLS] = { 0 };

	InitBoard(mine, ROWS, COLS, '0');
	InitBoard(show, ROWS, COLS, '*');


	DisplayBoard(show, ROW, COL);//打印雷区

	SetMine(mine, ROW, COL);//再雷区内，进行随机布雷
	DisplayBoard(mine, ROW, COL);//显示布雷所在

	FindMine(mine, show, ROW, COL);//玩家进行找雷

}
void text()
{
	int input = 0;
	srand((unsigned int)time(NULL));
	do
	{
		menu();
		printf("请选择:>");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			break;
		default:
			printf("选择错误，重新选择！");
			break;
		}
	} while (input);
}
int main()
{
	text();
	return 0;
}