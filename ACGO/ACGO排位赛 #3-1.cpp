#include <iostream>
using namespace std;

const int N = 1010;

int n, m;
char g[N][N];
char s[N];

int main()
{
    // 输入地图大小
    cin >> n >> m;
    // 输入地图
    for (int i = 0; i < n; i ++ ) cin >> g[i];
    // 输入行进路线
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

        // 如果下一步会走出迷宫，那么本次操作无效，并且打印NO Way!
        if (nx < 0 || nx >= n || ny < 0 || ny >= m)
        {
            puts("NO Way!");
            continue;
        }

        // 如果碰到守卫则打印OMG! I Can do win!
        if (g[nx][ny] == 'X')
        {
            puts("OMG! I Can do win!");
            break;
        }
        // 如果下一步可以行走，则打印I Can
        else puts("I Can");

        x = nx, y = ny;
    }

    return 0;
}
