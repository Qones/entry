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


	DisplayBoard(show, ROW, COL);//��ӡ����

	SetMine(mine, ROW, COL);//�������ڣ������������
	DisplayBoard(mine, ROW, COL);//��ʾ��������

	FindMine(mine, show, ROW, COL);//��ҽ�������

}
void text()
{
	int input = 0;
	srand((unsigned int)time(NULL));
	do
	{
		menu();
		printf("��ѡ��:>");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			break;
		default:
			printf("ѡ���������ѡ��");
			break;
		}
	} while (input);
}
int main()
{
	text();
	return 0;
}