#include <iostream>
#include <algorithm>
using namespace std;

int get_lucky(long long x) {
    long long max_digit = -1, min_digit = 10;
    while (x) {
        long long digit = x % 10;
        max_digit = max(max_digit, digit);
        min_digit = min(min_digit, digit);
        x /= 10;
    }
    return max_digit - min_digit;
}

int main() {
    long long T;
    cin >> T;
    while (T--) {
        long long l, r;
        cin >> l >> r;

        long long ans = l;
        for (long long i = l; i <= r; i++) {
            if (get_lucky(i) > get_lucky(ans)) {
                ans = i;
            }
        }

        cout << ans << endl;
    }
    return 0;
}
