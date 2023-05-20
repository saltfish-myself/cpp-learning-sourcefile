#include<bits/stdc++.h>
using namespace std;

int main(){
	string s;
	getline(cin,s);
	int len = s.size();
	int num = 0;
	for(int i = 0;i<=len;i++){
		if(s[i]>='0'&&s[i]<='9') num++;
	}
	cout<<num;
	return 0;
}
