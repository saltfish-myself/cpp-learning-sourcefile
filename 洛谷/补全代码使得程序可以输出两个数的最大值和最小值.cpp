#include<iostream>
using namespace std;
// ��� max_value��min_value ���� 
int max_value(int a,b){
	if(a>=b){
		return a;
	}else{
		return b;
	}
}
int min_value(int a,b){
	if(a<=b){
		return a;
	}else{
		return b;
	}
}
int main() {

	int a, b;
	cin >> a >> b;
	cout << "max=" << max_value(a, b) << endl;
	cout << "min=" << min_value(a, b) << endl; 
    
   return 0;
} 
