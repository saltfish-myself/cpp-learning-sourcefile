#include<bits/stdc++.h>
using namespace std;

long long pell(int x){
	if(x==1) return 1;
	else if(x==2) return 2;
	return 2*pell(x-1) +pell(x-2);
}

int main(){
	int n,y;
	cin>>n;
	for(int i = 0;i<n;i++){
		cin>>y;
		cout<<pell(y)<<endl;
	}

}
