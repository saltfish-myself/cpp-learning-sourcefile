#include<bits/stdc++.h>
using namespace std;

int main(){
	int n,m,len,x = 0,y = 0;//n*m
	cin>>n>>m;
	char a[m+10][n+10];
	string s;
	for(int i = 0;i<n;i++){
		for(int j = 0;j<m;j++){
			cin>>a[i][j];
		}
	}
	cin>>s;
	len = s.size();
	for(int i = 0;i<len;i++){
		if(s[i] == 'T'){
			if(x-1<0){
				cout<<"NO Way!"<<endl;
			}else{
				x--;
				if(a[x][y]=='.'){
					cout<<"I Can"<<endl;
				}else if(a[x][y]=='X'){
					cout<<"I Can do win!"<<endl;
				}
			}
		}else if(s[i] == 'D'){
			if(x+1>=n){//
				cout<<"NO Way!"<<endl;
			}else{
				x++;
				if(a[x][y]=='.'){
//					cout<<a[x][y]<<a[x+1][y]<<a[x+2][y]<<endl;
//					cout<<x<<y<<endl;
					cout<<"I Can"<<endl;
				}else if(a[x][y]=='X'){
					cout<<"I Can do win!"<<endl;
				}
			}
		}else if(s[i] == 'L'){
			if(y-1<0){
				cout<<"NO Way!"<<endl;
			}else{
				y--;
				if(a[x][y]=='.'){
					cout<<"I Can"<<endl;
				}else if(a[x][y]=='X'){
					cout<<"I Can do win!"<<endl;
				}
			}
		}else if(s[i] == 'R'){
			if(y+1==m){
				cout<<"NO Way!"<<endl;
			}else{
				y++;
				if(a[x][y]=='.'){
					cout<<"I Can"<<endl;
				}else if(a[x][y]=='X'){
					cout<<"I Can do win!"<<endl;
				}
			}
		}
	}
	return 0;
}
