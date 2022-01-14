#include <bits/stdc++.h>
using namespace std;

int helper(int arr[], int n, int sum, int ans, vector<vector<int>> &dp)
{
    if (n == 0)
        return abs((ans - sum) - sum);
    if (dp[n][sum] != -1)
        return dp[n][sum];
    dp[n][sum] = min(helper(arr, n - 1, sum + arr[n - 1], ans, dp), helper(arr, n - 1, sum, ans, dp));
}
int minDifference(int arr[], int n)
{
    // Your code goes here
    int ans = accumulate(arr, arr + n, 0);
    vector<vector<int>> dp(n + 1, vector<int>(ans + 1, -1));
    return helper(arr, n, 0, ans, dp);
}

int main()
{
    int arr[] = {1, 6, 11, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << "The Minimum difference of 2 sets is " << minDifference(arr, n) << '\n';
    return 0;
    return 0;
}