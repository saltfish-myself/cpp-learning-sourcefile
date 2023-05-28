#include <iostream>

using namespace std;

const int N = 310; // 宏定义数组的最大长度

long long a[N], ans[N]; // a 为输入序列，ans 为还原后的序列

int main() {
    long long T;
    cin >> T;
    while (T--) {
        long long n;
        cin >> n;
        for (int i = 0; i < n; i++) cin >> a[i];
        int l = 0, r = n - 1; // 初始化 ans 数组左右指针
        for (int i = 0; i < n; i += 2) ans[i] = a[l++];
        for (int i = 1; i < n; i += 2) ans[i] = a[r--];
        for (int i = 0; i < n; i++) {
            cout << ans[i];
            if (i != n - 1) cout << " "; // 输出每个数之间的空格，注意最后一个数后没有空格
        }
        cout << endl << endl; // 输出每组测试数据之间的空行，以及每组测试数据输出完之后的空行
    }
    return 0;
}
