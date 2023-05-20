#include<bits/stdc++.h>
using namespace std;

int count(int n) {
        int ans=0;
        int m=n/2-1;
        for(int i=0;i<=m;i++){
            ans+=n-(2*i+1);
        }
        return ans;
    }

int main(){
	int x,num[10010];
	cin>>x;
	for(int i = 1;i<=x;i++){
		cin>>num[i];
	}
	cout<<count(x);
	return 0;
}
