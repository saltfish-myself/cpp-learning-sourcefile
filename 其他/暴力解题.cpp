#include <cstdio>
int get[1005], g;
int dfs(int n) {
    if (n == 1)
        return 1;
    if (get[n] != 0)
        return get[n];
    int ans = 1;
    for (int i = 1; i <= n / 2; i++)
        ans += dfs(i);
    get[n] = ans;
    return ans;
}
int main(void) {
    scanf("%d", &g);
    printf("%d", dfs(g));
    return 0;
}
