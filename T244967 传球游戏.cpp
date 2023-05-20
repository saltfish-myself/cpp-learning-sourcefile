#include <bits/stdc++.h>
using namespace std;

int n, m, f[33][33];
int main(){
	cin>>n>>m;
    f[1][0] = 1;
    for(int i = 1; i <= m; i++) {
        f[1][i] = f[2][i-1] + f[n][i-1];
        f[n][i] = f[1][i-1] + f[n-1][i-1];
        for(int j = 2; j < n; j++) {
            f[j][i] = f[j-1][i-1] + f[j+1][i-1];
        }
    }
    cout<<f[1][m];
    return 0;
}
