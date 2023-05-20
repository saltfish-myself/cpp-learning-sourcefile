#include<bits/stdc++.h>
using namespace std;

int main(){
	vector<int> a;
	int n,x;
	cin>>n;
	for(int i = 0;i<n;i++){
		cin>>x;
		a.push_back(x);
	}
	for(int i = 0;i<n;i++){
		cout<<a[i]<<" ";
	}
	return 0;
}
