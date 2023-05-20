#include<bits/stdc++.h>
using namespace std;
double heron_formula(double a,double b,double c){
	double s,p;
	p = (a + b + c)/2;
    s = sqrt(p*(p-a)*(p-b)*(p-c));
    return s;
}
int main(){
	double a,b,c;
	cin>>a>>b>>c;
	double o = heron_formula(a,b,c);
	printf("%.2lf",o);
}
