#include<bits/stdc++.h>
using namespace std;

int main(){
	vector<int> a[110];
	int x;
	cin>>x;
	for(int i = 1;i<=x;i++){
		for(int j = 1;j<=i;j++){
			if(i % j==0) a[i].push_back(j);
		}
	} 
	for(int i = 1;i<=x;i++){
		for(int j = 0;j<a[i].size();j++){
			cout<<a[i][j]<<" ";
		}
		cout<<endl;
	} 
	return 0;
}
