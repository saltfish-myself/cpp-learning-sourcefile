#include<bits/stdc++.h>

constexpr auto FrameX = 13;  // ��Ϸ�������Ͻ� X ��������Ϊ 13;
constexpr auto FrameY = 3;  // ��Ϸ�������Ͻ�Y��������Ϊ 3;
constexpr auto Frame_height = 20;  // ��Ϸ���ڸ߶�Ϊ20;
constexpr auto Frame_width = 18;  // ��Ϸ���ڿ��Ϊ 18;
int Temp, Temp1, Temp2;  // temp, temp1, temp2 ���ڼ�ס��ת���������
int a[80][80];
int b[4];  // ��� 4 �����ڡ����飺1 ��ʾ�У�0 ��ʾû��
struct Tetris {  // ��������˹����Ľṹ��
	int x;  // ���ķ����X������
	int y;  // ���ķ����Y������
	int flag;  // ��Ƿ����������
	int next;  // ��һ����������
	int speed;  // �����ƶ��ٶ�
	int number;  // ��������˹����ĸ���
	int score;  // ��Ϸ����
	int leve1;  // ��Ϸ�ȼ�
};
HANDLE h0ut;  // ����̨���

// �������� 
int color(int c);
void gotoxy(int x, int y);
void DrwaGameframe();
void Flag(struct Tetris*);
void MakeTetris(struct Tetris*);
void PrintTetris(struct Tetris*);
void CleanTetris(struct Tetris*);
int ifmove(struct Tetris*);
void Del_Fullline(struct Tetris*);
void Gameplay();
void regulation();
void explation();
void welcom();
void Replay(struct Tetris* tetris);
void title();
void close();
int main();

int color(int c) {  // ������ɫ����
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), c);
	return 0;
}

void gotoxy(int x, int y) {  // ��ȡ��Ļ���λ��
	COORD pos;
	pos.X = x;  // ������
	pos.Y = y;  // ������
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);
}

void title() {  // ��ӭ�����Ϸ��ı���
	color(15);  // ����ɫ
	gotoxy(24, 3);
	printf("Ȥ ζ �� �� ˹ �� ��\n");  // �������
	color(11);  // ����ɫ
	gotoxy(18, 5);
	printf("��");
	gotoxy(18, 6);
	printf("����");
	gotoxy(18, 7);
	printf("��");
	
	color(14);  // ��ɫ
	gotoxy(26, 6);
	printf("����");
	gotoxy(28,6);
	printf("����");
	
	color(10);  // ��ɫ
	gotoxy(36,6);
	printf("����");
	gotoxy(36,7);
	printf("����");
	
	color(13);  // ��ɫ
	gotoxy(45,5);
	printf("��");
	gotoxy(45,6);
	printf("��");
	gotoxy(45,7);
	printf("��");
	gotoxy(45,8);
	printf("��");
	
	color(12);  // ����ɫ
	gotoxy(56,6 );
	printf("��");
	gotoxy(52,7);
	printf("������");
}

// ������Ϸ����
void DrwaGameframe() {
	gotoxy(FrameX+Frame_width-7, FrameY-2);
	color(11);
	printf("Ȥζ����˹����");
	gotoxy(FrameX +2*Frame_width + 3 , FrameY +7);
	color(2);
	printf("***********");
	gotoxy(FrameX + 2 * Frame_width + 13, FrameY + 7);
	color(3);
	printf("��һ���ַ���");
	gotoxy(FrameX+2*Frame_width+3,FrameY+13);
	color(2);
	printf("***********");
	gotoxy(FrameX+2*Frame_width+3,FrameY+16);
	color(14);
	printf("��:��ת");
	gotoxy(FrameX+2*Frame_width+3,FrameY+18);
	printf("�ո���ͣ��Ϸ\n");
	gotoxy(FrameX + 2 * Frame_width + 4, FrameY + 14);
	printf("ESC:�˳���Ϸ");
	gotoxy(FrameX, FrameY);
	color(12);
	printf("�X");
	gotoxy(FrameX + 2 * Frame_width - 2, FrameY);
	printf("�[");
	gotoxy(FrameX, FrameY + Frame_height);
	printf("�^");
	gotoxy(FrameX + 2 * Frame_width - 2, FrameY + Frame_height);
	printf("�a");
	a[FrameX][FrameY + Frame_height] = 2;
	a[FrameX + 2 * Frame_width - 2][FrameY + Frame_width] = 2;
	for(int i = 2; i < 2 * Frame_width - 2; i+= 2) {
		gotoxy(FrameX + i, FrameY);
		printf("�T");  // �Ϻ��
	}
	for(int i = 2; i < 2 * Frame_width - 2; i += 2) {
		gotoxy(FrameX + i, FrameY + Frame_height);
		printf("�T");//�º��
		a[FrameX + i][FrameY + Frame_height] = 2;
	}
	for(int i = 1; i < Frame_height; i++) {
		gotoxy(FrameX, FrameY + i);
		printf("�U");//������
		a[FrameX][FrameY + i] = 2;
	}
	for(int i = 1; i < Frame_height; i++) {
		gotoxy(FrameX + 2 * Frame_width - 2, FrameY + i);
		printf("�U");//������
		a[FrameX + 2 * Frame_width - 2][FrameY + i] = 2;
	}
}

// �˵�ѡ��߿�
void welcom() {
	int n;
	color(14);  // ��ɫ�߿�
	for(int i = 9; i <= 20; i++) {
		for(int j = 15; j <= 60; j++) {
			gotoxy(j, i);
			if (i == 9 || i == 20) printf("=");  // ��ӡ���±߿�
			else if (j == 15 || j == 59) printf("||");  // ��ӡ���ұ߿�
		}
	}
	
	// �˵�ѡ�������
	color(12);  // ����������ɫΪ��ɫ
	gotoxy(25, 12);  // ������ʾλ��
	printf("1.��ʼ��Ϸ");
	gotoxy(40, 12);
	printf("2.����˵��");
	gotoxy(25, 17);
	printf("3.��Ϸ����");
	gotoxy(40, 17);
	printf("4.�˳���Ϸ");
	gotoxy(21, 22);
	color(3);
	printf("��ѡ��1 2 3 4����[ ]\b\b");
	color(14);
	scanf("%d", &n);  // ����ѡ��
	switch(n) {
	case 1:
		system("cls");
		DrwaGameframe();
		Gameplay();
		break;
	case 2:
		explation();
		break;
	case 3:
		regulation();
		break;
	case 4:
		close();
		break;
	}
}

void MakeTetris(struct Tetris* tetris) {
	a[tetris->x][tetris->y] = b[0];//���ķ���λ�õ�ͼ��״̬
	switch(tetris->flag) {
	case 1:  // ���ַ���
		color(10);
		a[tetris->x][tetris->y-1] = b[1];
		a[tetris->x + 2][tetris->y - 1] = b[2];
		a[tetris->x + 2][tetris->y] = b[3];
		break;
	case 2:  // ֱ�߷��飨ƽ�ɣ�
		color(13);
		a[tetris->x - 2][tetris->y] = b[1];
		a[tetris->x + 2][tetris->y] = b[2];
		a[tetris->x + 4][tetris->y] = b[3];
		break;
	case 3:  // ֱ�߷��飨��ֱ��
		color(13);
		a[tetris->x][tetris->y - 1] = b[1];
		a[tetris->x][tetris->y - 2] = b[2];
		a[tetris->x][tetris->y + 1] = b[3];
		break;
	case 4:  // T ���ͷ���
		color(11);
		a[tetris->x - 2][tetris->y] = b[1];
		a[tetris->x + 2][tetris->y] = b[2];
		a[tetris->x][tetris->y + 1] = b[3];
		break;
	case 5:  // ˳ʱ�� 90 �� T ���η���
		color(11);
		a[tetris->x][tetris->y - 1] = b[1];
		a[tetris->x][tetris->y + 1] = b[2];
		a[tetris->x - 2][tetris->y] = b[3];
		break;
	case 6:  // ˳ʱ�� 180 �� T ���η���
		color(11);
		a[tetris->x][tetris->y - 1] = b[1];
		a[tetris->x - 2][tetris->y] = b[2];
		a[tetris->x + 2][tetris->y] = b[3];
		break;
	case 7:  // ˳ʱ�� 270 �� T ���η���
		color(11);
		a[tetris->x][tetris->y - 1] = b[1];
		a[tetris->x][tetris->y + 1] = b[2];
		a[tetris->x + 2][tetris->y] = b[3];
		break;
	case 8:  // Z ���η���
		color(14);
		a[tetris->x][tetris->y + 1] = b[1];
		a[tetris->x - 2][tetris->y] = b[2];
		a[tetris->x + 2][tetris->y + 1] = b[3];
		break;
	case 9:  // ˳ʱ�� Z ���η���
		color(14);
		a[tetris->x][tetris->y - 1] = b[1];
		a[tetris->x - 2][tetris->y] = b[2];
		a[tetris->x - 2][tetris->y + 1] = b[3];
		break;
	case 10:  // �� Z ���η���
		color(14);
		a[tetris->x][tetris->y - 1] = b[1];
		a[tetris->x - 2][tetris->y - 1] = b[2];
		a[tetris->x + 2][tetris->y] = b[3];
		break;
	case 11:  // ˳ʱ�뷴 Z ���η���
		color(14);
		a[tetris->x][tetris->y + 1] = b[1];
		a[tetris->x-2][tetris->y - 1] = b[2];
		a[tetris->x - 2][tetris->y ] = b[3];
		break;
	case 12:  // 7 ���η���
		color(12);
		a[tetris->x][tetris->y - 1] = b[1];
		a[tetris->x][tetris->y + 1] = b[2];
		a[tetris->x - 2][tetris->y - 1] = b[3];
		break;
	case 13:  // ˳ʱ�� 90 �� 7 ���η���
		color(12);
		a[tetris->x - 2][tetris->y] = b[1];
		a[tetris->x + 2][tetris->y - 1] = b[2];
		a[tetris->x + 2][tetris->y] = b[3];
		break;
	case 14:  // ˳ʱ�� 180 �� 7 ���η���
		color(12);
		a[tetris->x][tetris->y - 1] = b[1];
		a[tetris->x][tetris->y + 1] = b[2];
		a[tetris->x + 2][tetris->y + 1] = b[3];
		break;
	case 15:  // ˳ʱ�� 270 �� 7 ���η���
		color(12);
		a[tetris->x - 2][tetris->y] = b[1];
		a[tetris->x - 2][tetris->y + 1] = b[2];
		a[tetris->x + 2][tetris->y] = b[3];
		break;
	case 16:  // �� 7 ���η���
		color(12);
		a[tetris->x][tetris->y + 1] = b[1];
		a[tetris->x][tetris->y - 1] = b[2];
		a[tetris->x + 2][tetris->y - 1] = b[3];
		break;
	case 17:  // ˳ʱ�� 90 �ȷ� 7 ���η���
		color(12);
		a[tetris->x - 2][tetris->y] = b[1];
		a[tetris->x + 2][tetris->y + 1] = b[2];
		a[tetris->x + 2][tetris->y] = b[3];
		break;
	case 18:  // ˳ʱ�� 180 �ȷ� 7 ���η���
		color(12);
		a[tetris->x][tetris->y - 1] = b[1];
		a[tetris->x][tetris->y + 1] = b[2];
		a[tetris->x - 2][tetris->y + 1] = b[3];
		break;
	case 19:  // ˳ʱ�� 270 �ȷ� 7 ���η���
		color(12);
		a[tetris->x - 2][tetris->y] = b[1];
		a[tetris->x - 2][tetris->y - 1] = b[2];
		a[tetris->x + 2][tetris->y] = b[3];
		break;
	}
}

void PrintTetris(struct Tetris *tetris) {  // ��ӡ����
	for(int i = 0; i < 4; i++) {
		b[i] = 1;
	}
	MakeTetris(tetris);  // ��������
	for(int i = tetris->x - 2; i <= tetris->x + 4; i += 2) {
		for(int j = tetris->y - 2; j <= tetris->y + 1; j++) {
			if(a[i][j] == 1 && j > FrameY) {
				gotoxy(i, j);
				printf("��");
			}
		}
	}
	gotoxy(FrameX + 2 * Frame_width + 3, FrameY + 1);
	color(4);
	printf("level:");
	color(12);
	printf("%d", tetris->leve1);//����ȼ�
	gotoxy(FrameX + 2 * Frame_width + 3, FrameY + 3);
	color(4);
	printf("score:");//�������
	color(12);
	printf("%d", tetris->score);
	gotoxy(FrameX + 2 * Frame_width + 3, FrameY + 5);
	color(4);
	printf("speed:");//����ٶ�
	color(12);
	printf("%dms", tetris->speed);
}

int ifmove(struct Tetris* tetris) {  // �жϷ����Ƿ�����ƶ�
	if(a[tetris->x][tetris->y] != 0) return 0;
	else {
		if(
			(tetris->flag == 1 && (a[tetris->x][tetris->y - 1] == 0 && a[tetris->x + 2][tetris->y - 1] == 0 && a[tetris->x + 2][tetris->y] == 0)) ||
			(tetris->flag == 2 && (a[tetris->x - 2][tetris->y] == 0 && a[tetris->x + 2][tetris->y] == 0 && a[tetris->x + 4][tetris->y] == 0)) ||
			(tetris->flag == 3 && (a[tetris->x][tetris->y - 1] == 0 && a[tetris->x][tetris->y - 2] == 0 && a[tetris->x][tetris->y + 1] == 0)) ||
			(tetris->flag == 4 && (a[tetris->x - 2][tetris->y] == 0 && a[tetris->x + 2][tetris->y] == 0 && a[tetris->x][tetris->y + 1] == 0)) ||
			(tetris->flag == 5 && (a[tetris->x][tetris->y - 1] == 0 && a[tetris->x][tetris->y + 1] == 0 && a[tetris->x - 2][tetris->y] == 0)) ||
			(tetris->flag == 6 && (a[tetris->x][tetris->y - 1] == 0 && a[tetris->x - 2][tetris->y] == 0 && a[tetris->x + 2][tetris->y] == 0)) ||
			(tetris->flag == 7 && (a[tetris->x][tetris->y - 1] == 0 && a[tetris->x][tetris->y + 1] == 0 && a[tetris->x + 2][tetris->y] == 0)) ||
			(tetris->flag == 8 && (a[tetris->x][tetris->y + 1] == 0 && a[tetris->x - 2][tetris->y] == 0 && a[tetris->x + 2][tetris->y + 1] == 0)) ||
			(tetris->flag == 9 && (a[tetris->x][tetris->y - 1] == 0 && a[tetris->x - 2][tetris->y] == 0 && a[tetris->x - 2][tetris->y + 1] == 0)) ||
			(tetris->flag == 10 && (a[tetris->x][tetris->y - 1] == 0 && a[tetris->x - 2][tetris->y - 1] == 0 && a[tetris->x + 2][tetris->y] == 0)) ||
			(tetris->flag == 11 && (a[tetris->x][tetris->y + 1] == 0 && a[tetris->x - 2][tetris->y - 1] == 0 && a[tetris->x - 2][tetris->y] == 0)) ||
			(tetris->flag == 12 && (a[tetris->x][tetris->y - 1] == 0 && a[tetris->x][tetris->y + 1] == 0 && a[tetris->x - 2][tetris->y - 1] == 0)) ||
			(tetris->flag == 15 && (a[tetris->x - 2][tetris->y] == 0 && a[tetris->x - 2][tetris->y + 1] == 0 && a[tetris->x + 2][tetris->y] == 0)) ||
			(tetris->flag == 14 && (a[tetris->x][tetris->y - 1] == 0 && a[tetris->x][tetris->y + 1] == 0 && a[tetris->x + 2][tetris->y + 1] == 0)) ||
			(tetris->flag == 13 && (a[tetris->x - 2][tetris->y] == 0 && a[tetris->x + 2][tetris->y - 1] == 0 && a[tetris->x + 2][tetris->y] == 0)) ||
			(tetris->flag == 16 && (a[tetris->x][tetris->y + 1] == 0 && a[tetris->x][tetris->y - 1] == 0 && a[tetris->x + 2][tetris->y - 1] == 0)) ||
			(tetris->flag == 19 && (a[tetris->x - 2][tetris->y] == 0 && a[tetris->x - 2][tetris->y - 1] == 0 && a[tetris->x + 2][tetris->y] == 0)) ||
			(tetris->flag == 18 && (a[tetris->x][tetris->y - 1] == 0 && a[tetris->x][tetris->y + 1] == 0 && a[tetris->x - 2][tetris->y + 1] == 0)) ||
			(tetris->flag == 17 && (a[tetris->x - 2][tetris->y] == 0 && a[tetris->x + 2][tetris->y + 1] == 0 && a[tetris->x + 2][tetris->y] == 0))) 
			return 1;
	}
	return 0;
}

void CleanTetris(struct Tetris  *tetris) {  // ��������㼣
	for(int i = 0; i < 4; i++) {
		b[i] = 0;
	}
	MakeTetris(tetris);
	for(int i = tetris->x - 2; i <= tetris->x +4; i+= 2) {
		for(int j = tetris->y - 2; j <= tetris->y + 1; j++) {
			if(a[i][j] == 0 && j > FrameY) {
				gotoxy(i, j);
				printf("   ");
			}
		}
	}
}

void Del_Fullline(struct Tetris* tetris) {  // �ж��Ƿ����У���ɾ�����еķ���
	int k, del_rows = 0;
	for(int j = FrameY + Frame_height - 1; j >= FrameY + 1; j--) {
		k = 0;
		for(int i = FrameX + 2; i < FrameX + 2 * Frame_width - 2; i += 2) {
			if(a[i][j] == 1) {
				k++;
				if(k == Frame_width - 2) {
					for(k = FrameX + 2; k < FrameX + 2 * Frame_width - 2; k += 2) {
						a[k][j] = 0;
						gotoxy(k, j);
						printf("  ");
					}
					for(k = j - 1; k > FrameY; k--) {
						for(int i = FrameX + 2; i < FrameX + 2 * Frame_width - 2; i += 2) {
							if(a[i][k] == 1) {
								a[i][j] = 0;
								gotoxy(i, k);
								printf("  ");
								a[i][k + 1] = 1;
								gotoxy(i, k + 1);
								printf("��");
							}
						}
					}
					j++;
					del_rows++;
				}
			}
		}
	}
	tetris->score += 100 * del_rows;
	if (del_rows > 0 && (tetris->score % 1000 == 0 || tetris->score / 1000 > tetris->leve1 - 1))
	{
		tetris->speed -= 20;
		tetris->leve1++;
	}
}

void  Flag(struct Tetris* tetris) {  // ���������������
	tetris->number++;
	srand((unsigned)time(NULL));
	if (tetris->number == 1) tetris->flag = rand() % 19 + 1;
	tetris->next = rand() % 19 + 1;
}

void Replay(struct Tetris* tetris) {  // ���¿�ʼ��Ϸ 
	system("cls");
	memset(a, 0, 6400 * sizeof(int));
	DrwaGameframe();
	Gameplay();
}

void Gameplay() {  // ��ʼ��Ϸ 
	int n;
	struct Tetris t, * tetris = &t;
	char ch;
	tetris->number = 0;  // ��ʼ��������Ϊ 0
	tetris->speed = 300;  // ��ʼ�ƶ��ٶ� 300
	tetris->score = 0;  // ��ʼ����
	tetris->leve1 = 1;  // ��ʼ�ȼ�
	while(true) {  // �������飬ֱ����Ϸ����
		Flag(tetris);
		Temp = tetris->flag;
		tetris->x = FrameX + 2 * Frame_width + 6;
		tetris->y = FrameY + 10;
		tetris->flag = tetris->next;
		PrintTetris(tetris);
		tetris->x = FrameX + Frame_width;
		tetris->y = FrameY - 1;
		tetris->flag = Temp;
		while(true) {
		label:PrintTetris(tetris);  // ��ӡ����
			Sleep(tetris->speed);  // �ӻ��ٶ�
			CleanTetris(tetris);
			Temp1 = tetris->x;
			Temp2 = tetris->flag;
			if(_kbhit()) {
				ch = _getch();
				if(ch == 75) tetris->x -= 2;
				if(ch == 77) tetris->x += 2;
				if(ch == 80) {
					if(ifmove(tetris) != 0)	tetris->y += 2;
					if(ifmove(tetris) == 0) tetris->y = FrameY + Frame_height - 2;
				}
				if(ch == 72) {
					if(tetris->flag >= 2 && tetris->flag <= 3)	{
						tetris->flag++;
						tetris->flag %= 2;
						tetris->flag += 2;
					}
					if(tetris->flag >= 4 && tetris->flag <= 7) {
						tetris->flag++;
						tetris->flag %= 4;
						tetris->flag += 4;
					}
					if(tetris->flag >= 8 && tetris->flag <= 11) {
						tetris->flag++;
						tetris->flag %= 4;
						tetris->flag += 8;
					}
					if(tetris->flag >= 12 && tetris->flag <= 15) {
						tetris->flag++;
						tetris->flag %= 4;
						tetris->flag += 12;
					}
					if(tetris->flag = 16 && tetris->flag <= 19) {
						tetris->flag++;
						tetris->flag %= 4;
						tetris->flag += 16;
					}
				}
				if(ch == 32) {  // ���ո����ͣ
					PrintTetris(tetris);
					while(true) {
						if(_kbhit())  {  // ���ո������
							ch = _getch();
							if(ch == 32) goto label;
						}
					}
				}
				if(ch == 27) {
					system("cls");
					memset(a, 0, 6400 * sizeof(int));  // ��ʼ�� a ����
					welcom();
				}
				if(ifmove(tetris) == 0) {
					tetris->x = Temp1;
					tetris->flag = Temp2;
				} else goto label;  // ����ɶ���ִ�в���
			}
			tetris->y++;  // ���û��������������ƶ�
			if(ifmove(tetris) == 0) {
				tetris->y--;
				PrintTetris(tetris);
				Del_Fullline(tetris);
				break;
			}
		}
		for(int i = tetris->y - 2; i < tetris->y + 2; i++) {
			if(i == FrameY) {
				system("cls");
				gotoxy(29, 7);
				printf("     \n");
				color(12);
				printf("\t\t\t��������    ��        ��    ����         \n");
				printf("\t\t\t��          ����      ��    ��    ��      \n");
				printf("\t\t\t������      ��  ��    ��    ��     ��     \n");
				printf("\t\t\t��          ��    ��  ��    ��    ��        \n");
				printf("\t\t\t��������    ��      ����    ����            \n");
				gotoxy(17, 18);
				color(14);
				printf("����һ��-----------1");
				gotoxy(44, 18);
				printf("�˳���Ϸ-----------2\n");
				int n;
				gotoxy(32, 20);
				printf("ѡ��1/2����");
				color(11);
				scanf("%d", &n);
				switch(n) {
				case 1:
					system("cls");
					Replay(tetris);
					break;
				case 2:
					exit(0);
					break;
				}
			}
		}
		tetris->flag = tetris->next;
		tetris->x = FrameX + 2 * Frame_width + 6;
		tetris->y = FrameY + 10;
		CleanTetris(tetris);
	}
}

void explation() {  // ����˵�� 
	system("cls");
	color(13);
	gotoxy(32, 3);
	printf("����˵��");
	color(2);
	for(int i = 6; i <= 16; i++) {
		for(int j = 15; j <= 60; j++) {
			gotoxy(j, i);
			if (i == 6 || i == 16) printf("=");
			else if (j == 15 || j == 59) printf("||");
		}
	}
	color(3);
	gotoxy(18, 7);
	printf("Tip1:��ҿ���ͨ����  ����������ƶ�����");
	color(10);
	gotoxy(18, 9);
	printf("Tip2:ͨ����ʹ������ת");
	color(14);
	gotoxy(18, 11);
	printf("Tip3:ͨ����ʹ������ת");
	color(11);
	gotoxy(18, 13);
	printf("Tip4:���ո����ͣ��Ϸ���ٰ��ո��������Ϸ");
	color(4);
	gotoxy(18, 15);
	printf("Tip5:��ESC�˳���Ϸ");
	_getch();
	system("cls");
	main();
}

void regulation() {  // ��Ϸ���� 
	system("cls");
	color(13);
	gotoxy(34, 3);
	printf("��Ϸ����");
	color(2);
	for(int i = 6; i <= 18; i++) {
		for(int j = 12; j <= 70; j++) {
			gotoxy(j, i);
			if (i ==6 || i == 18) printf("=");
			else if (j == 12 || j == 69) printf("||");
		}
	}
	color(12);
	gotoxy(16, 7);
	printf("Tip1:��ͬ��״��С�������Ļ�Ϸ����£���ҵ���");
	gotoxy(22, 9);
	printf("�����λ�úͷ���ʹ��������Ļ�ײ�ƴ��������");
	gotoxy(22, 11);
	printf("һ�л���");
	color(14);
	gotoxy(16, 13);
	printf("Tip2:ÿ����һ�У����ּ� 100");
	color(11);
	gotoxy(16, 15);
	printf("Tip3:ÿ�ۼ� 1000 �֣��������и��ȼ�");
	color(10);
	gotoxy(16, 17);
	printf("Tip4:�ȼ�Խ�ߣ����������ٶ�Խ�죬�Ѷ�Խ��");
	_getch();
	system("cls");
	welcom();
}

void close() {  // �˳� 
	exit(0);
}

int main() {  
	
	title();
	welcom();
	_getch();
	
	return 0;
}
