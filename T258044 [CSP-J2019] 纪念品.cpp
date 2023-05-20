#include <bits/stdc++.h>
using namespace std;
const int N = 101;
const int M = 10001;
int n, m, t, price[N][N], f[M];
int main()
{
	cin >> t >> n >> m;
	for(int i = 1; i <= t; i++)
		for(int j = 1; j <= n; j++)
			cin >> price[j][i];
	for(int k = 1; k < t; k++)
	{
		memset(f, 0, sizeof f);
		for(int i = 1; i <= n; i++)
			for(int j = price[i][k]; j <= m; j++)
				f[j] = max(f[j], f[j - price[i][k]] + price[i][k + 1] - price[i][k]);
      
		m += f[m];
	}
	cout << m;
	return 0;
}


