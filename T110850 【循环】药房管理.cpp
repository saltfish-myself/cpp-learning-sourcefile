#include<bits/stdc++.h>
using namespace std;

int main(){
	int a,n,t,k = 0;//a��ҩƷ������n�ǵ���ȡҩ��������t��ÿ��ȡ��ҩƷ���� 
	cin>>a>>n;
	for(int i = 1;i<=n;i++){
		cin>>t;
		if(a-t>0){
			a = a - t;
		}else{
			k++;
		}
	}
	cout<<k;
}
