#include <bits/stdc++.h>
using namespace std;

int main() {
	
	string name;
	float price; 
	cout << "��������Ʒ�����ƣ�" << endl;
	cin >> name;
	cout << "����ɹ�����Ʒ�������ǣ�" << name << endl; 
	cout << "��������Ʒ�ļ۸�" << endl;
	cin >> price; 
	cout << "����ɹ�����Ʒ�ļ۸��ǣ�" << price << endl;
	// ����������֧�� ������ 
	float income, pay;
	float sum = 0;	
	int week = 1;
	for(; sum < price; ) {
		cout << "��ǰ��Ʒ��" << name << "�ļ۸�Ϊ��" << price << endl; 
		cout << "��" << week << "�ܵ������Ƕ��٣�";
		cin >> income;
		cout << "��" << week << "�ܵ�֧���Ƕ��٣�";
		cin >> pay;
		sum = income - pay + sum;  // �� week ���ܵ�Ǯ 
		cout << "��ǰ�ܵ�ǮΪ��" << sum << "Ԫ" << endl; 
		cout << "---------------------------" << endl;
		if(sum >= price) break;
		price = price * 1.1; 
		week = week + 1;		
	}
	cout << "Ǯ�ܹ��ˣ���ȥ����ɣ�" << endl;
	system("pause");  // ��ʾ����ʱ�������д��ڻ�������� 
	
	return 0;
}
