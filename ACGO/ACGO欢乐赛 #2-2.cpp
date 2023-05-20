#include<bits/stdc++.h>
using namespace std;

void pai(int x,int y,int z){
	long long fu = 0,zh = 0;
	long long a[4];
	if(x<0) fu++;
	else zh++;
	if(y<0) fu++;
	else zh++;
	if(z<0) fu++;
	else zh++;
	a[1] = x;
	a[2] = y;
	a[3] = z;
	for(int i = 0;i<3;i++){
		if(a[i]>a[i + 1]){
			swap(a[i],a[i + 1]);
		}			
	}
	if(fu>zh){
		x = a[2];
		y = a[3];
		z = a[1];
		cout<<x<<y<<z;
	}else{
		x = a[3];
		y = a[2];
		z = a[1];
		cout<<x<<y<<z;
	}
}
int main(){
	long long x;
	cin>>x;
	long long b[x];
	for(long long i = 0;i<x;i++){
		cin>>b[i];
	}
	for(long long i = 1;i<x-2;i++){
		pai(b[i],b[i+1],b[i+2]);
	}
//	for(long long i = 0;i<x;i++){
//		cout<<b[i]<<" ";
//	}
}
