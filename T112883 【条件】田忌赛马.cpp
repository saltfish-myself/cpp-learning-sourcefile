#include <bits/stdc++.h> 
using namespace std; 

int main() {
    int a,b,c;
	int a1,a2,a3;
    cin>>a>>b>>c>>a1>>a2>>a3;
    if(a1 > a || a2 > b || a3 > c){
		cout<<"WIN";
    }else {
		cout <<"LOSE";
	}
	return 0;
}
