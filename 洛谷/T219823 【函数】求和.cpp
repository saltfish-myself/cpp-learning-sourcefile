#include <bits/stdc++.h>
using namespace std;

// ʵ�� add ��������� a + b ��ֵ(���ҷ���)���в������з���ֵ(�ҷ���ֵ������ int) 
int add(int a, int b) { 
	// ʵ�� add �����Ĺ��ܣ���� a + b ��ֵ(���ҷ���) 
	int sum = a + b;
	return sum;
} 

int main() {
	
	int a, b;  // ������� a b 
	cin >> a >> b;  // ���� a b 
	// ���� add ��������� a + b ��ֵ���в������з���ֵ���ҽ�����ֵ��ֵ�� sum 
	int sum = add(a, b);  
	cout << sum;  // ��� sum 
	
	return 0;
}
