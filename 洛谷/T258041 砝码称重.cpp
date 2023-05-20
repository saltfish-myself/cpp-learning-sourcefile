#include <iostream>
#include <cstring>
using namespace std;

const int maxn = 1005;
bool f[maxn];
int a[7] = {0, 1, 2, 3, 5, 10, 20};
int main(){
    int ans = 0;
    f[0] = true;
    for(int i=1; i<=6; i++){
        int x;
        cin >> x;
        for(int j=0; j<x; j++){
            for(int k=1000; k>=a[i]; k--){
                if(f[k-a[i]]){
                    f[k] = true;
				}
            }
        }
    }
    for(int i=1; i<=1000; i++){
        if(f[i])
            ans++;
    }
    cout << "Total=" << ans << endl;
    return 0;
}
