#include <bits/stdc++.h>
using namespace std;

// �������� a��ȫ�����飬����Ҫ������ init ���������棬init �����ſ�ʹ�� 
int a[20];  

// ʵ�� init ������������ a ��ʼ��Ϊ -1���޲�����Ҳ�޷���ֵ  
void init() { 
	// ʵ�ֺ������ܣ����� a ��ʼ��Ϊ -1 
	for(int i = 0;i<20;i++){
		a[i] = -1;
	}
	
}

int main() {
	
	init();  // ���� init ������������ a ��ʼ��Ϊ -1�����޲�����Ҳ�޷���ֵ 
	for(int i = 0; i < 20; i++) {  // ��� a ���� 
		cout << a[i] << " ";
	}

	return 0;
}
