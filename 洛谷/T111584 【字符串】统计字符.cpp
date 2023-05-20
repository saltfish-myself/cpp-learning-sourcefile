#include<bits/stdc++.h>
using namespace std;
int main(){
	string a;
	int l = 0,d = 0,o = 0;
	getline(cin,a);
	for(int i = 0;a[i]!='?';i++){
		if(a[i]>='a'&&a[i]<='z') l++;
		else if(a[i]>='0'&&a[i]<='9')d++;else o++;
	}
	cout<<"Letters="<<l<<endl;
	cout<<"Digits="<<d<<endl;
	cout<<"Others="<<o<<endl;
}
