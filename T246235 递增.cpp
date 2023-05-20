#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

// 动态规划求最长递增子序列的长度
int LIS(vector<int>& nums) {
    long long n = nums.size();
    vector<int> dp(n, 1); // dp[i]表示以nums[i]结尾的最长递增子序列的长度
    int ans = 1; // 记录最大的dp值
    for (int i = 1; i < n; i++) {
        for (int j = 0; j < i; j++) {
            if (nums[j] < nums[i]) { // 如果nums[j]比nums[i]小，说明可以接在后面形成一个更长的子序列
                dp[i] = max(dp[i], dp[j] + 1); // 更新dp[i]为最大值
            }
        }
        ans = max(ans, dp[i]); // 更新ans为最大值
    }
    return ans;
}

int main() {
    long long n; // 输入数组的长度
    cin >> n;
    vector<int> nums(n); // 输入数组
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }
    int lis = LIS(nums); // 求出最长递增子序列的长度
    int ans = n - lis; // 最少修改的个数等于总个数减去最长递增子序列的长度
    cout << ans << endl; // 输出答案
    return 0;
}
