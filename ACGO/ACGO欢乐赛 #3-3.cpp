#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++){
        cin >> a[i];
    }
    int sum = accumulate(a.begin(), a.end(), 0);
    int average = sum / n;
    int cnt = 0;
    for (int i = 0; i < n; i++) {
        cnt += abs(a[i] - average);
    }
    cout<<cnt<<endl;
    return 0;
}
