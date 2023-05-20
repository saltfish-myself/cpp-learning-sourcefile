#include<bits/stdc++.h>
using namespace std;
string s;
int a[10010];
int main(){
	int n,x;
	cin>>n;
	int m = n * n;
	int cnt = 0,i = 1;
	while(cnt<=m){
		cin>>x;
		a[i] = x;
		cnt+=x;
		i++;
	}
	for(int j = 1;j<=i;j+=2){
		for(int k = 1;k<=a[j];k++){
			s = s + "0";
		}
		for(int k = 1;k<=a[j+1];k++){
			s += "1";
		}
	}
	for(int x = 0;x<n;x++){
		for(int y = 0;y<n;y++){
			cout<<s[y];
		}
		cout<<endl;
	}
	return 0;
}
