#include<bits/stdc++.h>
using namespace std;

struct student{
	string name;
	int weight;
};
int main(){
	int n;
	cin>>n;
	student a[110];
	for(int i = 1;i <= n;i++){
		cin>>a[i].name>>a[i].weight;
	}
	for(int i = 1;i <= n;i++){
		cout<<a[i].name<<"->"<<a[i].weight<<endl;
	}
	return 0;
}
