#include<iostream>
using namespace std;
// ��ɻ������ж� is_pal ���� 
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
int main() {

	int n;
	cin >> n;
	if(is_pal(n)) cout << "Yes" << endl;
	else cout << "No" << endl;
    
   return 0;
} 
