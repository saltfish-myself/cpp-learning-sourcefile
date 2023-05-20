#include<bits/stdc++.h>
using namespace std;

struct student{
	string name;
	int w;
};
int main(){
	int x;
	cin>>x;
	student a[10010];
	for(int i = 0;i<x;i++){
		cin>>a[i].name>>a[i].w;
	}
	for(int j = 0;j<x - 1;j++){
		for(int i = 0;i<x - 1;i++){
			if(a[i].w<a[i+1].w){
				swap(a[i].w,a[i+1].w);
				swap(a[i].name,a[i+1].name);
			}
		}
	}
	for(int i = 0;i < x;i++){
		cout<<a[i].name<<" "<<a[i].w<<endl;
	}
}
