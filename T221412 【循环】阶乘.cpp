#include<bits/stdc++.h>
using namespace std;
int main()//��n�Ľ׳ˣ�
{
	int n = 0;
	int sum = 1;
	cin>>n;
	for (int i = 1; i <= n; i++)
	{
		sum = sum * i;
	}
	cout<<sum;

	return 0;
}

