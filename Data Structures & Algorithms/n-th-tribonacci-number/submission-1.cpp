class Solution {
public:
vector<int>dp;
int check(int n, int i){
    if(i==n) return 0;
    if(i==n-1) return 1;
    if(i==n-2) return 1;
    if(dp[i]!=-1) return dp[i];
    return dp[i]=check(n,i+1)+check(n,i+2)+check(n,i+3);
}
    int tribonacci(int n) {
        dp.assign(n+1,-1);
        return check(n,0);
    }
};