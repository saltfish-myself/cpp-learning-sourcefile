#include<bits/stdc++.h>
using namespace std;

int a[110] = {-1};
int main(){
	int q;
	cin>>q;
	while(q--){
		int n;
		cin>>n;
		for(int i = 1;i<=n;i++) cin>>a[i];
		sort(a+1,a+n+1);
		int f = true;
		for(int i  = 2;i<=n;i++){
			if(a[i] == a[i-1]){
				f = false;
				break;
			}
			cout<<(f?"YES":"NO")<<endl;
		}
	}
	return 0;
}

