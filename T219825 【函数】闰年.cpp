#include <bits/stdc++.h>
using namespace std;

// ʵ�� is_leap ����������ֵ�� bool ����
bool is_leap(int y) {  
	// ʵ�� is_leap �����Ĺ��ܣ���� y ������ͷ��� true����� y ��ƽ��ͷ��� false  
	if(y%4==0&&y%100!=0||y%400==0){
		return true;
	}else{
		return false;
	}
}

int main() {

	int y;
	cin >> y;
	if(is_leap(y)) cout << "YES";  // ��� is_leap �������� true����˵�������� 
	else cout << "NO";  // ��� is_leap �������� false����˵����ƽ��

	return 0;
}
