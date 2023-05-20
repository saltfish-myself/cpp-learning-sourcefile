#include<bits/stdc++.h>
using namespace std;

struct student{
	string name;
	int g;
	string n;
};
int main(){
	int x;
	cin>>x;
	student a[10010];
	for(int i = 1;i <= x;i++){
		cin>>a[i].name>>a[i].g>>a[i].n;
	}
	for(int i = 1;i <= x;i++){
		if(a[i].g == 1){
			cout<<a[i].name<<" "<<a[i].n<<endl;
		}
	}
	return 0;
}
