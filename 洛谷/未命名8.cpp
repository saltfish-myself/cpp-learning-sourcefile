#include<bits/stdc++.h>
using namespace std;
struct stu{
	string name;
	int y,m,d;
	int c;
}a[110];
bool cmp(stu x,stu y){
	if(x.y!=y.y) return x.y<y.y;
	else if(x.m!=y.m) return x.m<y.m;
	else if(x.d!=y.d) return x.d<y.d;
	else return x.c>y.c;
}
int main(){
	int n;
	cin>>n;
	for(int i = 1;i<=n;i++){
		cin>>a[i].name>>a[i].y>>a[i].m>>a[i].d;
		a[i].c = i;
	}
	sort(a+1,a+1+n,cmp);
	for(int i = 1;i<=n;i++){
		cout<<a[i].name<<endl;
	}
	return 0;
}
