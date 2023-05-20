#include <iostream>
using namespace std;

// 定义一个函数，计算购买n升水的最低金额
long long min_cost(long long n, long long a, long long b) {
    // 如果一升的瓶装水比两升的便宜或相等，那么全部买一升的
    if (a <= b / 2) {
        return n * a;
    }
    // 否则，尽可能多地买两升的，剩下的买一升的
    else {
        return (n / 2) * b + (n % 2) * a;
    }
}

int main() {
    // 读入测试用例的数量
    int T;
    cin >> T;
    // 对于每个测试用例
    while (T--) {
        // 读入n, a, b
        long long n, a, b;
        cin >> n >> a >> b;
        // 调用函数，输出结果
        cout << min_cost(n, a, b) << endl;
    }
    return 0;
}
