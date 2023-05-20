#include<bits/stdc++.h>
using namespace std;

struct salary{
	int num;//员工编号 
	int sal;//薪水 
	int sec;//部门 
	int cla;//等级 
};
bool sala(salary a,salary b){
    return a.sal > b.sal;
}
bool clas(salary a,salary b){
    return a.cla > b.cla;
}
bool sect(salary a,salary b){
    return a.sec > b.sec;
}
bool numb(salary a,salary b){
    return a.num > b.num;
}
int main(){
	salary sa[10010];
	int x;
	cin>>x;
	for(int i = 1;i<=x;i++){
		cin>>sa[i].num>>sa[i].sal>>sa[i].sec>>sa[i].cla;
		
	}
	sort(sa,sa+x,sala);
	sort(sa,sa+x,clas);
	sort(sa,sa+x,sect);
	sort(sa,sa+x,numb);
	for(int i = 1;i<=x;i++){
		cout<<sa[i].num<<" "<<sa[i].sal<<" "<<sa[i].sec<<" "<<sa[i].cla<<endl;
	}
}
