class Solution {
public:
vector<int>dp;
int check(vector<int>&nums, int i, int n){
    if(i>=n) return 0;
    if(dp[i]!=-1) return dp[i];
    int c1 = nums[i]+check(nums,i+2,n);
    int c2 = check(nums,i+1, n);
    return dp[i] = max(c1,c2);
}
    int rob(vector<int>& nums) {
        int n = nums.size();
        dp.assign(n+1,-1);
        return check(nums,0,n);
    }
};
