#include<bits/stdc++.h>
using namespace std;

int main(){
	int k,cnt = 0,cnt_e = 0;
	string n; 
	cin>>n>>k;
	int l = n.size();
	for(int i = l-1;i>=0;i--){
		for(int j = i;j>=0;j--){
			if(n[j]==0){
				cnt++;
			}else if(cnt>=k){
				cout<<cnt_e;
				return 0;
			}else{
				n.erase(i);
				cnt_e++;
			}
		}
	}
	return 0;
	
}
