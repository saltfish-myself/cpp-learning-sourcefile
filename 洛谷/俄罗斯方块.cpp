#include<bits/stdc++.h>

constexpr auto FrameX = 13;  // 游戏窗口左上角 X 的轴坐标为 13;
constexpr auto FrameY = 3;  // 游戏窗口左上角Y的轴坐标为 3;
constexpr auto Frame_height = 20;  // 游戏窗口高度为20;
constexpr auto Frame_width = 18;  // 游戏窗口宽度为 18;
int Temp, Temp1, Temp2;  // temp, temp1, temp2 用于记住和转换方块变量
int a[80][80];
int b[4];  // 标记 4 个“口”方块：1 表示有，0 表示没有
struct Tetris {  // 声明俄罗斯方块的结构体
	int x;  // 中心方块的X轴坐标
	int y;  // 中心方块的Y轴坐标
	int flag;  // 标记方块类型序号
	int next;  // 下一个方块的序号
	int speed;  // 方块移动速度
	int number;  // 产生俄罗斯方块的个数
	int score;  // 游戏分数
	int leve1;  // 游戏等级
};
HANDLE h0ut;  // 控制台句柄

// 函数声明 
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

int color(int c) {  // 文字颜色函数
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), c);
	return 0;
}

void gotoxy(int x, int y) {  // 获取屏幕光标位置
	COORD pos;
	pos.X = x;  // 横坐标
	pos.Y = y;  // 纵坐标
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);
}

void title() {  // 欢迎界面上方的标题
	color(15);  // 亮白色
	gotoxy(24, 3);
	printf("趣 味 俄 罗 斯 方 块\n");  // 输出标题
	color(11);  // 亮蓝色
	gotoxy(18, 5);
	printf("■");
	gotoxy(18, 6);
	printf("■■");
	gotoxy(18, 7);
	printf("■");
	
	color(14);  // 黄色
	gotoxy(26, 6);
	printf("■■");
	gotoxy(28,6);
	printf("■■");
	
	color(10);  // 绿色
	gotoxy(36,6);
	printf("■■");
	gotoxy(36,7);
	printf("■■");
	
	color(13);  // 粉色
	gotoxy(45,5);
	printf("■");
	gotoxy(45,6);
	printf("■");
	gotoxy(45,7);
	printf("■");
	gotoxy(45,8);
	printf("■");
	
	color(12);  // 亮红色
	gotoxy(56,6 );
	printf("■");
	gotoxy(52,7);
	printf("■■■");
}

// 制作游戏窗口
void DrwaGameframe() {
	gotoxy(FrameX+Frame_width-7, FrameY-2);
	color(11);
	printf("趣味俄罗斯方块");
	gotoxy(FrameX +2*Frame_width + 3 , FrameY +7);
	color(2);
	printf("***********");
	gotoxy(FrameX + 2 * Frame_width + 13, FrameY + 7);
	color(3);
	printf("下一出现方块");
	gotoxy(FrameX+2*Frame_width+3,FrameY+13);
	color(2);
	printf("***********");
	gotoxy(FrameX+2*Frame_width+3,FrameY+16);
	color(14);
	printf("↑:旋转");
	gotoxy(FrameX+2*Frame_width+3,FrameY+18);
	printf("空格：暂停游戏\n");
	gotoxy(FrameX + 2 * Frame_width + 4, FrameY + 14);
	printf("ESC:退出游戏");
	gotoxy(FrameX, FrameY);
	color(12);
	printf("╔");
	gotoxy(FrameX + 2 * Frame_width - 2, FrameY);
	printf("╗");
	gotoxy(FrameX, FrameY + Frame_height);
	printf("╚");
	gotoxy(FrameX + 2 * Frame_width - 2, FrameY + Frame_height);
	printf("╝");
	a[FrameX][FrameY + Frame_height] = 2;
	a[FrameX + 2 * Frame_width - 2][FrameY + Frame_width] = 2;
	for(int i = 2; i < 2 * Frame_width - 2; i+= 2) {
		gotoxy(FrameX + i, FrameY);
		printf("═");  // 上横框
	}
	for(int i = 2; i < 2 * Frame_width - 2; i += 2) {
		gotoxy(FrameX + i, FrameY + Frame_height);
		printf("═");//下横框
		a[FrameX + i][FrameY + Frame_height] = 2;
	}
	for(int i = 1; i < Frame_height; i++) {
		gotoxy(FrameX, FrameY + i);
		printf("║");//左竖框
		a[FrameX][FrameY + i] = 2;
	}
	for(int i = 1; i < Frame_height; i++) {
		gotoxy(FrameX + 2 * Frame_width - 2, FrameY + i);
		printf("║");//右竖框
		a[FrameX + 2 * Frame_width - 2][FrameY + i] = 2;
	}
}

// 菜单选项边框
void welcom() {
	int n;
	color(14);  // 黄色边框
	for(int i = 9; i <= 20; i++) {
		for(int j = 15; j <= 60; j++) {
			gotoxy(j, i);
			if (i == 9 || i == 20) printf("=");  // 打印上下边框
			else if (j == 15 || j == 59) printf("||");  // 打印左右边框
		}
	}
	
	// 菜单选项的文字
	color(12);  // 设置字体颜色为红色
	gotoxy(25, 12);  // 设置显示位置
	printf("1.开始游戏");
	gotoxy(40, 12);
	printf("2.按键说明");
	gotoxy(25, 17);
	printf("3.游戏规则");
	gotoxy(40, 17);
	printf("4.退出游戏");
	gotoxy(21, 22);
	color(3);
	printf("请选择【1 2 3 4】：[ ]\b\b");
	color(14);
	scanf("%d", &n);  // 输入选项
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
	a[tetris->x][tetris->y] = b[0];//中心方块位置的图形状态
	switch(tetris->flag) {
	case 1:  // 田字方块
		color(10);
		a[tetris->x][tetris->y-1] = b[1];
		a[tetris->x + 2][tetris->y - 1] = b[2];
		a[tetris->x + 2][tetris->y] = b[3];
		break;
	case 2:  // 直线方块（平躺）
		color(13);
		a[tetris->x - 2][tetris->y] = b[1];
		a[tetris->x + 2][tetris->y] = b[2];
		a[tetris->x + 4][tetris->y] = b[3];
		break;
	case 3:  // 直线方块（竖直）
		color(13);
		a[tetris->x][tetris->y - 1] = b[1];
		a[tetris->x][tetris->y - 2] = b[2];
		a[tetris->x][tetris->y + 1] = b[3];
		break;
	case 4:  // T 字型方块
		color(11);
		a[tetris->x - 2][tetris->y] = b[1];
		a[tetris->x + 2][tetris->y] = b[2];
		a[tetris->x][tetris->y + 1] = b[3];
		break;
	case 5:  // 顺时针 90 度 T 字形方块
		color(11);
		a[tetris->x][tetris->y - 1] = b[1];
		a[tetris->x][tetris->y + 1] = b[2];
		a[tetris->x - 2][tetris->y] = b[3];
		break;
	case 6:  // 顺时针 180 度 T 字形方块
		color(11);
		a[tetris->x][tetris->y - 1] = b[1];
		a[tetris->x - 2][tetris->y] = b[2];
		a[tetris->x + 2][tetris->y] = b[3];
		break;
	case 7:  // 顺时针 270 度 T 字形方块
		color(11);
		a[tetris->x][tetris->y - 1] = b[1];
		a[tetris->x][tetris->y + 1] = b[2];
		a[tetris->x + 2][tetris->y] = b[3];
		break;
	case 8:  // Z 字形方块
		color(14);
		a[tetris->x][tetris->y + 1] = b[1];
		a[tetris->x - 2][tetris->y] = b[2];
		a[tetris->x + 2][tetris->y + 1] = b[3];
		break;
	case 9:  // 顺时针 Z 字形方块
		color(14);
		a[tetris->x][tetris->y - 1] = b[1];
		a[tetris->x - 2][tetris->y] = b[2];
		a[tetris->x - 2][tetris->y + 1] = b[3];
		break;
	case 10:  // 反 Z 字形方块
		color(14);
		a[tetris->x][tetris->y - 1] = b[1];
		a[tetris->x - 2][tetris->y - 1] = b[2];
		a[tetris->x + 2][tetris->y] = b[3];
		break;
	case 11:  // 顺时针反 Z 字形方块
		color(14);
		a[tetris->x][tetris->y + 1] = b[1];
		a[tetris->x-2][tetris->y - 1] = b[2];
		a[tetris->x - 2][tetris->y ] = b[3];
		break;
	case 12:  // 7 字形方块
		color(12);
		a[tetris->x][tetris->y - 1] = b[1];
		a[tetris->x][tetris->y + 1] = b[2];
		a[tetris->x - 2][tetris->y - 1] = b[3];
		break;
	case 13:  // 顺时针 90 度 7 字形方块
		color(12);
		a[tetris->x - 2][tetris->y] = b[1];
		a[tetris->x + 2][tetris->y - 1] = b[2];
		a[tetris->x + 2][tetris->y] = b[3];
		break;
	case 14:  // 顺时针 180 度 7 字形方块
		color(12);
		a[tetris->x][tetris->y - 1] = b[1];
		a[tetris->x][tetris->y + 1] = b[2];
		a[tetris->x + 2][tetris->y + 1] = b[3];
		break;
	case 15:  // 顺时针 270 度 7 字形方块
		color(12);
		a[tetris->x - 2][tetris->y] = b[1];
		a[tetris->x - 2][tetris->y + 1] = b[2];
		a[tetris->x + 2][tetris->y] = b[3];
		break;
	case 16:  // 反 7 字形方块
		color(12);
		a[tetris->x][tetris->y + 1] = b[1];
		a[tetris->x][tetris->y - 1] = b[2];
		a[tetris->x + 2][tetris->y - 1] = b[3];
		break;
	case 17:  // 顺时针 90 度反 7 字形方块
		color(12);
		a[tetris->x - 2][tetris->y] = b[1];
		a[tetris->x + 2][tetris->y + 1] = b[2];
		a[tetris->x + 2][tetris->y] = b[3];
		break;
	case 18:  // 顺时针 180 度反 7 字形方块
		color(12);
		a[tetris->x][tetris->y - 1] = b[1];
		a[tetris->x][tetris->y + 1] = b[2];
		a[tetris->x - 2][tetris->y + 1] = b[3];
		break;
	case 19:  // 顺时针 270 度反 7 字形方块
		color(12);
		a[tetris->x - 2][tetris->y] = b[1];
		a[tetris->x - 2][tetris->y - 1] = b[2];
		a[tetris->x + 2][tetris->y] = b[3];
		break;
	}
}

void PrintTetris(struct Tetris *tetris) {  // 打印方块
	for(int i = 0; i < 4; i++) {
		b[i] = 1;
	}
	MakeTetris(tetris);  // 制作方块
	for(int i = tetris->x - 2; i <= tetris->x + 4; i += 2) {
		for(int j = tetris->y - 2; j <= tetris->y + 1; j++) {
			if(a[i][j] == 1 && j > FrameY) {
				gotoxy(i, j);
				printf("■");
			}
		}
	}
	gotoxy(FrameX + 2 * Frame_width + 3, FrameY + 1);
	color(4);
	printf("level:");
	color(12);
	printf("%d", tetris->leve1);//输出等级
	gotoxy(FrameX + 2 * Frame_width + 3, FrameY + 3);
	color(4);
	printf("score:");//输出分数
	color(12);
	printf("%d", tetris->score);
	gotoxy(FrameX + 2 * Frame_width + 3, FrameY + 5);
	color(4);
	printf("speed:");//输出速度
	color(12);
	printf("%dms", tetris->speed);
}

int ifmove(struct Tetris* tetris) {  // 判断方块是否可以移动
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

void CleanTetris(struct Tetris  *tetris) {  // 清除方块足迹
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

void Del_Fullline(struct Tetris* tetris) {  // 判断是否满行，并删除满行的方块
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
								printf("■");
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

void  Flag(struct Tetris* tetris) {  // 随机产生方块类型
	tetris->number++;
	srand((unsigned)time(NULL));
	if (tetris->number == 1) tetris->flag = rand() % 19 + 1;
	tetris->next = rand() % 19 + 1;
}

void Replay(struct Tetris* tetris) {  // 重新开始游戏 
	system("cls");
	memset(a, 0, 6400 * sizeof(int));
	DrwaGameframe();
	Gameplay();
}

void Gameplay() {  // 开始游戏 
	int n;
	struct Tetris t, * tetris = &t;
	char ch;
	tetris->number = 0;  // 初始化方块数为 0
	tetris->speed = 300;  // 初始移动速度 300
	tetris->score = 0;  // 初始分数
	tetris->leve1 = 1;  // 初始等级
	while(true) {  // 产生方块，直到游戏结束
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
		label:PrintTetris(tetris);  // 打印方块
			Sleep(tetris->speed);  // 延缓速度
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
				if(ch == 32) {  // 按空格键暂停
					PrintTetris(tetris);
					while(true) {
						if(_kbhit())  {  // 按空格键继续
							ch = _getch();
							if(ch == 32) goto label;
						}
					}
				}
				if(ch == 27) {
					system("cls");
					memset(a, 0, 6400 * sizeof(int));  // 初始化 a 数组
					welcom();
				}
				if(ifmove(tetris) == 0) {
					tetris->x = Temp1;
					tetris->flag = Temp2;
				} else goto label;  // 如果可动，执行操作
			}
			tetris->y++;  // 如果没有命令，方块向下移动
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
				printf("\t\t\t■■■■    ■        ■    ■■         \n");
				printf("\t\t\t■          ■■      ■    ■    ■      \n");
				printf("\t\t\t■■■      ■  ■    ■    ■     ■     \n");
				printf("\t\t\t■          ■    ■  ■    ■    ■        \n");
				printf("\t\t\t■■■■    ■      ■■    ■■            \n");
				gotoxy(17, 18);
				color(14);
				printf("再来一局-----------1");
				gotoxy(44, 18);
				printf("退出游戏-----------2\n");
				int n;
				gotoxy(32, 20);
				printf("选择【1/2】：");
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

void explation() {  // 按键说明 
	system("cls");
	color(13);
	gotoxy(32, 3);
	printf("按键说明");
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
	printf("Tip1:玩家可以通过←  →方向键来移动方块");
	color(10);
	gotoxy(18, 9);
	printf("Tip2:通过↑使方块旋转");
	color(14);
	gotoxy(18, 11);
	printf("Tip3:通过↓使方块旋转");
	color(11);
	gotoxy(18, 13);
	printf("Tip4:按空格键暂停游戏，再按空格键继续游戏");
	color(4);
	gotoxy(18, 15);
	printf("Tip5:按ESC退出游戏");
	_getch();
	system("cls");
	main();
}

void regulation() {  // 游戏规则 
	system("cls");
	color(13);
	gotoxy(34, 3);
	printf("游戏规则");
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
	printf("Tip1:不同形状的小方块从屏幕上方落下，玩家调整");
	gotoxy(22, 9);
	printf("方块的位置和方向，使它们在屏幕底部拼出完整的");
	gotoxy(22, 11);
	printf("一行或几行");
	color(14);
	gotoxy(16, 13);
	printf("Tip2:每消除一行，积分加 100");
	color(11);
	gotoxy(16, 15);
	printf("Tip3:每累计 1000 分，会提升有个等级");
	color(10);
	gotoxy(16, 17);
	printf("Tip4:等级越高，方块下落速度越快，难度越高");
	_getch();
	system("cls");
	welcom();
}

void close() {  // 退出 
	exit(0);
}

int main() {  
	
	title();
	welcom();
	_getch();
	
	return 0;
}
