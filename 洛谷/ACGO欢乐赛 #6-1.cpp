#include <iostream>

using namespace std;

const int N = 310; // �궨���������󳤶�

long long a[N], ans[N]; // a Ϊ�������У�ans Ϊ��ԭ�������

int main() {
    long long T;
    cin >> T;
    while (T--) {
        long long n;
        cin >> n;
        for (int i = 0; i < n; i++) cin >> a[i];
        int l = 0, r = n - 1; // ��ʼ�� ans ��������ָ��
        for (int i = 0; i < n; i += 2) ans[i] = a[l++];
        for (int i = 1; i < n; i += 2) ans[i] = a[r--];
        for (int i = 0; i < n; i++) {
            cout << ans[i];
            if (i != n - 1) cout << " "; // ���ÿ����֮��Ŀո�ע�����һ������û�пո�
        }
        cout << endl << endl; // ���ÿ���������֮��Ŀ��У��Լ�ÿ��������������֮��Ŀ���
    }
    return 0;
}
