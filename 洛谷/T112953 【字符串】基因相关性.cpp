#include<bits/stdc++.h>
using namespace std;

int main (){
	double a;
	long long c = 0,len;
	string DNA1,DNA2;
	cin>>a;
	cin>>DNA1>>DNA2;
	len = DNA1.size();
	for(int i = 0;i<len;i++){
		if(DNA1[i]==DNA2[i]){
			c++;
		}
	}
	if(c/(len*1.0)>=a) cout<<"yes";
	else cout<<"no";
}
