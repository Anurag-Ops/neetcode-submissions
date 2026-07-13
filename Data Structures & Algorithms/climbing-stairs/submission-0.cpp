class Solution {
   public:
    vector<int> dp;
    int check(int n) {
        if (n == 0) return 1;
        if (n < 0) return 0;
        if (dp[n] != -1) return dp[n];
        int c1 = check(n - 1);
        int c2 = check(n - 2);
        return dp[n] = c1 + c2;
    }
    int climbStairs(int n) {
        dp.assign(n+1, -1);
        return check(n);
    }
};
