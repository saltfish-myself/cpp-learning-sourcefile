#include <iostream>
using namespace std;

// ����һ�����������㹺��n��ˮ����ͽ��
long long min_cost(long long n, long long a, long long b) {
    // ���һ����ƿװˮ�������ı��˻���ȣ���ôȫ����һ����
    if (a <= b / 2) {
        return n * a;
    }
    // ���򣬾����ܶ���������ģ�ʣ�µ���һ����
    else {
        return (n / 2) * b + (n % 2) * a;
    }
}

int main() {
    // �����������������
    int T;
    cin >> T;
    // ����ÿ����������
    while (T--) {
        // ����n, a, b
        long long n, a, b;
        cin >> n >> a >> b;
        // ���ú�����������
        cout << min_cost(n, a, b) << endl;
    }
    return 0;
}
