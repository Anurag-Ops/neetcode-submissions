class Solution {
public:
vector<int>dp;
int check(vector<int>& nums, int i){
    if(dp.empty()) dp.assign(nums.size()+1,-1);
    if(i>=nums.size()) return 0;
    if(dp[i]!=-1) return dp[i];
    int c1 = nums[i]+check(nums,i+2);
    int c2 = check(nums,i+1);
    return dp[i]=max(c1,c2);
}
    int rob(vector<int>& nums) {
        return check(nums,0);
    }
};
