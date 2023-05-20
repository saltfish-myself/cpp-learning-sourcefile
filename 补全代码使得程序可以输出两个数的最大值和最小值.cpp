#include<iostream>
using namespace std;
// Íê³É max_value¡¢min_value º¯Êı 
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
