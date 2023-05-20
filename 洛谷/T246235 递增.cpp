#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

// ��̬�滮������������еĳ���
int LIS(vector<int>& nums) {
    long long n = nums.size();
    vector<int> dp(n, 1); // dp[i]��ʾ��nums[i]��β������������еĳ���
    int ans = 1; // ��¼����dpֵ
    for (int i = 1; i < n; i++) {
        for (int j = 0; j < i; j++) {
            if (nums[j] < nums[i]) { // ���nums[j]��nums[i]С��˵�����Խ��ں����γ�һ��������������
                dp[i] = max(dp[i], dp[j] + 1); // ����dp[i]Ϊ���ֵ
            }
        }
        ans = max(ans, dp[i]); // ����ansΪ���ֵ
    }
    return ans;
}

int main() {
    long long n; // ��������ĳ���
    cin >> n;
    vector<int> nums(n); // ��������
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }
    int lis = LIS(nums); // �������������еĳ���
    int ans = n - lis; // �����޸ĵĸ��������ܸ�����ȥ����������еĳ���
    cout << ans << endl; // �����
    return 0;
}
