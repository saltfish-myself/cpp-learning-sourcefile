#include <bits/stdc++.h>
using namespace std;

int n;
int a[100010];
int main(){
    cin>>n;
    for(int i=0;i<n;i++) cin>>a[i];
    sort(a, a + n);
    int sum1 = 0, sum2 = 0;
    for (int i=n-1; i>=0; i-=2) sum1 += a[i];
    for (int i=n-2; i>=0; i-=2) sum2 += a[i];
    cout<<abs(sum1-sum2) << endl;
    return 0;
}
