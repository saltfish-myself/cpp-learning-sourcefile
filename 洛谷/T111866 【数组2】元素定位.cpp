#include<bits/stdc++.h>

using namespace std;
int main(){
	int l,s;//�ֱ�Ϊ�к��� 
	cin>>l>>s;
	int a[110][110];
	for(int i = 1;i<=l;i++){
		for(int j = 1;j<=s;j++){
			cin>>a[i][j];
		}
	}
	int x,y;//�ֱ�Ϊ��Ҫ���ҵ��к��� 
	cin>>x>>y;
	cout<<a[x][y];
}
