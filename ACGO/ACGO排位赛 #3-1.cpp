#include <iostream>
using namespace std;

const int N = 1010;

int n, m;
char g[N][N];
char s[N];

int main()
{
    // �����ͼ��С
    cin >> n >> m;
    // �����ͼ
    for (int i = 0; i < n; i ++ ) cin >> g[i];
    // �����н�·��
    cin >> s;

    int x = 0, y = 0;
    for (int i = 0; s[i]; i ++ )
    {
        char c = s[i];
        int nx = x, ny = y;
        if (c == 'T') nx -- ;
        else if (c == 'D') nx ++ ;
        else if (c == 'L') ny -- ;
        else ny ++ ;

        // �����һ�����߳��Թ�����ô���β�����Ч�����Ҵ�ӡNO Way!
        if (nx < 0 || nx >= n || ny < 0 || ny >= m)
        {
            puts("NO Way!");
            continue;
        }

        // ��������������ӡOMG! I Can do win!
        if (g[nx][ny] == 'X')
        {
            puts("OMG! I Can do win!");
            break;
        }
        // �����һ���������ߣ����ӡI Can
        else puts("I Can");

        x = nx, y = ny;
    }

    return 0;
}
