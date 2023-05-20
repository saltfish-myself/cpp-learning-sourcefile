#include<bits/stdc++.h>
using namespace std;

const int N = 30;
// 定义结构体类数组 
struct food {
	string name;  // 名字
	int price;  // 价格 
	int pop;  // 受欢迎程度 
} a[N];

int main() {
	int n, m;  // n 种外卖，m 块钱
	cin >> n >> m;
	for(int i = 0; i < n; i++) {
		cin >> a[i].name >> a[i].price >> a[i].pop;
	} 
	int Max = -1;  // 受欢迎程度的最大值 
	int id = -1;  // 能点的外卖的下标 
	// 遍历 a 数组，找到价格 <= m 的，受欢迎程度最高（最大值） 
	for(int i = 0; i < n; i++) {
		if(a[i].price <= m && a[i].pop > Max) {  // 买得起，并且受欢迎程度 > Max 
			Max = a[i].pop;  // 更新最大值 
			n = i;  // 记录下标 
		}
	}
	if(id == -1) cout << "...>_<...";
	else cout << a[id].name << " " << a[id].price << " " << a[id].pop;
	
    return 0;
}
