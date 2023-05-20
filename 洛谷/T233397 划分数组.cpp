#include<bits/stdc++.h>
using namespace std;

int main(){
	int m,n,a[10010];
	cin>>n;
	for(int i = 0;i<n;i++){
		cin>>a[i];
	}
	m = round(n/2)+1;
	while(m>2){
		cout<<"[";
		for(int i = 0;i<m;i++){
			cout<<a[i]<<" ";
		}
		cout<<"]"<<",";
		cout<<"[";
		for(int i = m;i<n;i++){
			cout<<a[i]<<" ";
		}
		cout<<"]"<<endl;
		n -= m;
		m = round(n/2)+1;
	}
	return 0;
}
