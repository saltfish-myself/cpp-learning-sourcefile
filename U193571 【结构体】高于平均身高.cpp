#include<bits/stdc++.h>
using namespace std;

struct student{
	string name;
	int high;
};
int main(){
	int average;
	int n;
	cin>>n;
	student a[110];
	for(int i = 1;i <= n;i++){
		cin>>a[i].name>>a[i].high;
	}
	for(int i = 1;i <= n;i++){
		average += a[i].high;
	}
	average /= n;
	for(int i = 1;i <= n;i++){
		if(a[i].high>average){
			cout<<a[i].name<<" "<<a[i].high<<endl;
		}
	}
	return 0;
}
