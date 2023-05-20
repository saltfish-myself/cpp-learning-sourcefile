#include<bits/stdc++.h>
using namespace std;

int main(){
	int n;
	char c;
	cin>>n>>c;
	for(int i = 0;i<n/2;i++){
		if(i==0 or i==n/2-1){
			for(int i = 0;i<n;i++){
				cout<<c;
			}
			cout<<endl;
			}else{
				cout<<c;
				for(int i = 0;i<n-2;i++){
					cout<<" ";
				}
				cout<<c<<endl;
			}
		}
	return 0;
	}
