#include <bits/stdc++.h>
using namespace std;

// ʵ�� fac ���������� n!�������� n!(����ֵ������ int) 
int fac(int n) {
	// ʵ�� fac �����Ĺ��ܣ����� n!�������� n! 
	int ji = 1;
	for(int i = 1;i<=n;i++){
		ji*=i;
	}
	return ji;
}

int main() {
	
	int n;
	cin >> n;
	int sum = 0;  // �����洢�׳˺ͣ���Ϊ�ۼ������ǵó�ʼ��Ϊ 0 
	for(int i = 1; i <= n; i++) {  // �� 1~n 
		// ���� fac ������fac(i) ���� i!���� i! �ӵ� sum �� 
		sum+=fac(i); 
	}
	cout << sum;  // ����׳˺�   
	
	return 0;
}
