#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    for(int i=2;i<=n;i++){
        if(n%i==0){
            cout<<n/i;
            return 0;
        }
	}
}
