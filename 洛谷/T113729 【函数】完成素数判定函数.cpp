#include<iostream>
using namespace std;
// ��������ж� is_prime ���� 
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
	if(is_prime(n)) cout << "Yes" << endl;
	else cout << "No" << endl;
    
   return 0;
} 
