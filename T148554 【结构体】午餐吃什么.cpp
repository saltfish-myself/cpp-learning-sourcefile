#include<bits/stdc++.h>
using namespace std;

struct student{
	string name;//名字 
	int price;//价格 
	int pop;//受欢迎程度 
};
int main(){
	student a[10010];
	int n,m;
	cin>>n>>m;
	for(int i = 0;i<n;i++){
		cin>>a[i].name>>a[i].price>>a[i].pop;
	}
	int mx = -1;
	int x = -1;
	for(int i = 0;i<n;i++){
		if(a[i].price <= m && a[i].pop > mx){
			mx = a[i].pop;
			x = i;
		}
	}
	if(x == -1) cout<<"...>_<...";
	else cout<<a[x].name<<" "<<a[x].price<<" "<<a[x].pop;
    return 0;
}
