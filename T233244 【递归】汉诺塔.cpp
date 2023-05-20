#include<bits/stdc++.h>
using namespace std;

void move(int x,char A,char B){
	printf("%c --%d--> %c\n",A,x,B);
}
void hanoi(int x,char A,char B,char C){
	if(x==1) move (1,A,C);
	else{
		hanoi(x-1,A,C,B);
		move(x,A,C);
		hanoi(x-1,B,A,C);
	}
}
int main(){
	int n;
	cin>>n;
	hanoi(n,'A','B','C');
	return 0;
}
