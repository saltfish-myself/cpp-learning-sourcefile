#include <cstdio>
#include <cstring>
#include <algorithm>
const int MAX = 22;
bool milk[MAX] = {0};
bool vis[MAX][MAX][MAX] = {0};
static int bkt[3];
void dfs(int a[]) {
    if (vis[a[0]][a[1]][a[2]]) return;
    vis[a[0]][a[1]][a[2]] = true;
    if (a[0] == 0) milk[a[2]] = true;
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j) {
            if (j == i) continue;
            if (a[j] < bkt[j] && a[i] > 0) {
                int rec = std::min(bkt[j] - a[j], a[i]);
                int b[3];
                memcpy(b, a, sizeof(int)*3);
                b[i] -= rec, b[j] += rec;
                dfs(b);
            }
        }
    }
}
int main(){
    int &A = bkt[0], &B = bkt[1], &C = bkt[2];
    scanf(" %d %d %d", &A, &B, &C);
    int a[3] = {0,0,C};
    dfs(a);
    for (int i = 0; i < C; ++i) {
        if (milk[i]) printf("%d ", i);
    }
    printf("%d\n", C);
    return 0;
}
