#include<bits/stdc++.h>
using namespace std;

struct student{
	string name;
	double score;
};
int main(){
	student a[110];
	for(int i = 1;i <= 3;i++){
		cin>>a[i].name>>a[i].score;
	}
	for(int i = 1;i <= 3;i++){
		cout<<a[i].name<<" "<<a[i].score<<endl;
	}
	return 0;
}
