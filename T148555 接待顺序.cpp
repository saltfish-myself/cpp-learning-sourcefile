#include<bits/stdc++.h>
using namespace std;
struct student {
	string name;
	int age;
	int id;
};
int main(){
	student a[210];
	int n;
	cin>>n;
	for(int i=1;i<=n;i++){
		cin >> a[i].name >> a[i].age >> a[i].id;
	}
	for(int i=1;i<=n-1;i++){
		for(int j = 1;j<=n-1;j++){
			if((a[j].age > 60 && a[j+1].age >60) || (a[j].age<=60 && a[j+1].age <= 60)){
				if(a[j].id > a[j+1].id) swap(a[j],a[j+1]);
			}else if (a[j].age <= 60 && a[j+1].age > 60){
				swap(a[j], a[j+1]);
			}
		}
	}
	for(int i =1;i<=n;i++){
		cout<<a[i].name<<endl;
	}
	return 0;
}

