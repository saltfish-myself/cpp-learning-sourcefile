#include<bits/stdc++.h>
#include<algorithm>
using namespace std;
double count(double a,double b,double c){
	return max(a,b,c)/(max(a+b,b,c)*max(a,b,b+c));
}

int main(){
	int a,b,c;
	cin>>a>>b>>c;
	cout<<count(a,b,c);
}

