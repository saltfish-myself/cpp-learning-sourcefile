#include<bits/stdc++.h>
using namespace std;

struct student{
	string name;
	double score;
	int age;
};
int main(){
	int n;
	cin>>n;
	student a[110];
	for(int i = 1;i <= n;i++){
		cin>>a[i].name>>a[i].score>>a[i].age;
	}
	for(int i = 1;i <= n;i++){
		cout<<a[i].name<<" "<<a[i].score<<" "<<a[i].age<<endl;
	}
	return 0;
}
