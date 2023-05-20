#include<bits/stdc++.h>
using namespace std;
int main (){
	int a,out;
	out = 0;
	cin>>a;
	for(int i = 1;i <= a;i = i + 1){
		if(i%3==2&&i%5==3&&i%7==2){
			out = i;
			cout<<out<<endl;
		}
		
	}
}
