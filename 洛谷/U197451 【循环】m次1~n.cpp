#include<bits/stdc++.h>
using namespace std;

int main(){
	long long m,n;
	cin>>m>>n;
	int i = 0;
	while (i<m){
		for(int j = 1;j <= n;j++){
			cout<<j<<" ";
		}
		cout<<endl;
		i++;
	}
	return 0;
}
