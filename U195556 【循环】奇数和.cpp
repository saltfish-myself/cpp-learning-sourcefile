#include<bits/stdc++.h>
using namespace std;
int main (){
	int a,sum;
	sum = 0;
	cin>>a;
	if(a % 2 == 0){
		a = a - 1;
	}
	for(int i = 1;i <= a;i = i + 2){
		sum = i + sum;
	}
	cout<<sum;
}
