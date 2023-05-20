#include <bits/stdc++.h>
using namespace std;

// ʵ�� is_pal ��������� n �ǻ��������򷵻� true�����򷵻� false 
bool is_pal(int n) {
	int m = n;
	int sum = 0;
	while(m){
		sum = sum * 10 + m % 10;
		m/=10;
	}
	if(sum==n){
		return true;
	}else{
		return false;
	}
} 

// ʵ�� is_prime ��������� n ���������򷵻� true�����򷵻� false
bool is_prime(int n) {
	if(n<2){
	return false;
	}
	for(int i = 2;i<n;i++){
		if(n%i==0){
		return false;
		}
	}
	return true;
}

int main() {
	
	int n;
	cin >> n;
	// ��� is_pal(n) ���� true������ is_prime(n) ���� true����˵�� n �ǻ������� 
	if(is_pal(n) && is_prime(n)) {  
		cout << "Yes";
	}else {  // ����n ���ǻ������� 
		cout << "No";
	}

	return 0;
}
