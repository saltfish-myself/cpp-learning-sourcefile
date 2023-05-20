#include<bits/stdc++.h>
using namespace std;

int main(){
	int min = 0,n,num[10010],sum = 0,ave,x = 0;
	cin>>n;
	for(int i = 1;i<=n;i++){
		cin>>num[i];
		sum+=num[i];
	}
	ave = round(sum / n);
	for(int i = 1;i<=n;i++){
		if(num[i]<ave){
			x += (ave - num[i]);
		}else if(num[i]>ave){
			x += (num[i] - ave);
		}
	}
	cout<<x;
	return 0;
}
