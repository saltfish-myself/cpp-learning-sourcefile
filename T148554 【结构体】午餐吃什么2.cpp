#include<bits/stdc++.h>
using namespace std;

const int N = 30;
// ����ṹ�������� 
struct food {
	string name;  // ����
	int price;  // �۸� 
	int pop;  // �ܻ�ӭ�̶� 
} a[N];

int main() {
	int n, m;  // n ��������m ��Ǯ
	cin >> n >> m;
	for(int i = 0; i < n; i++) {
		cin >> a[i].name >> a[i].price >> a[i].pop;
	} 
	int Max = -1;  // �ܻ�ӭ�̶ȵ����ֵ 
	int id = -1;  // �ܵ���������±� 
	// ���� a ���飬�ҵ��۸� <= m �ģ��ܻ�ӭ�̶���ߣ����ֵ�� 
	for(int i = 0; i < n; i++) {
		if(a[i].price <= m && a[i].pop > Max) {  // ����𣬲����ܻ�ӭ�̶� > Max 
			Max = a[i].pop;  // �������ֵ 
			n = i;  // ��¼�±� 
		}
	}
	if(id == -1) cout << "...>_<...";
	else cout << a[id].name << " " << a[id].price << " " << a[id].pop;
	
    return 0;
}
