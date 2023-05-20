#include<bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin>>n;
	for(int i = 1;i<=n;i++){
		if(i%2==1){
			for(int j = n*(i-1)+1;j<i*n+1;j++){
				cout<<j<<" ";
			}
			cout<<endl;
		}else{
			for(int j = i*n;j>(i-1)*n;j--){//循环判断结束条件出错，需要修改。 
				cout<<j<<" ";
			}
			cout<<endl;
		}
	}
	return 0;
}
