class Solution {
public:
vector<int>dp;
int solve(vector<int>&cost ,int i ,int n){
    if(i>=n) return 0;
    if(dp[i]!=-1) return dp[i];
    int take = cost[i]+solve(cost,i+1,n);
    int take2 = cost[i]+solve(cost,i+2,n);
    return dp[i]=min(take,take2);
}
    int minCostClimbingStairs(vector<int>& cost) {
        int n= cost.size();
        dp.assign(n+1,-1);
        return min(solve(cost,0,n),solve(cost,1,n));
    }
};