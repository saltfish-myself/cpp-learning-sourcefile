#include<bits/stdc++.h>
using namespace std;
int main (){
	int a,b;
	cin>>a>>b;
	if(a % 2 == 0){
		a = a + 1;
	}
	for(int i = a;i <= b;i = i + 2){
		cout<<i<<endl;
	}
}
