#include <iostream>
#include <windows.h>
#include<conio.h>
using namespace std;
int main (){
	char music;
	cout <<"---小小钢琴家---"<<endl;
	cout <<"---输入数字1-7进行弹奏---"<<endl;
	cout <<"小星星的曲谱是：1155665-4433221-5544332-1155665-4433221"<<endl;
	cout <<"欢乐颂的曲谱是：3345-5432-1123-322-3345-5432-1123-211"<<endl;
	cout <<"两只老虎的曲谱是1231-1231-345-345-565431-565431-251-251"<<endl;
	while(true){
		music = getche();
		if(music == '1'){
			Beep(523,400);
		}
		if(music == '2'){
			Beep(587,400);
		}
		if(music == '3'){
			Beep(659,400);
		}
		if(music == '4'){
			Beep(698,400);
		}
		if(music == '5'){
			Beep(784,400);
		}
		if(music == '6'){
			Beep(880,400);
		}
		if(music == '7'){
			Beep(990,400);
		}
	}

//	Beep(523,400);
//	Beep(587,400);
//	Beep(659,400);
//	Beep(698,400);
//	Beep(784,400);
//	Beep(880,400);
//	Beep(990,400);
	
	return 0;
}
