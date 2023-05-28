#include <bits/stdc++.h>
using namespace std;

int b;

int toDecimal(string& s){
    int res = 0;
    for (int i = 0; i < s.size(); i++) {
        int digit = isdigit(s[i]) ? s[i] - '0' : s[i] - 'A' + 10;
        res = res * b + digit;
    }
    return res;
}

string toB(int n){
    string res = "";
    while(n){
        int digit = n % b;
        char c = digit < 10 ? digit + '0' : digit - 10 + 'A';
        res += c;
        n /= b;
    }
    reverse(res.begin(), res.end());
    return res;
}

int main(){
    string s1, s2;
    cin >> b >> s1 >> s2;
    int n1 = toDecimal(s1), n2 = toDecimal(s2);
    int sum = n1 + n2;
    string res = toB(sum);
    cout << res << endl;
    return 0;
}

