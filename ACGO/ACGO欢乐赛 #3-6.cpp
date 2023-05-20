#include <iostream>
#include <algorithm>
using namespace std;

const int N = 1e4 + 10;

int n, k, d, w;
int t[N];

int main(){
    int T;
    cin >> T;
    while (T--){
        cin >> n >> k >> d >> w;
        for (int i = 0; i < n; i ++ ) cin >> t[i];
        sort(t, t + n);
        int res = 0;
        for (int i = 0; i < n; ){
            int j = i;
            while (j < n && t[j] - t[i] <= w) j ++ ;
            res += (j - i + k - 1) / k;
            i = j;
        }
        cout << res << endl;
    }
    return 0;
}
