class Solution {
public:
    int climb(vector<int>&dp,int n){
        if(n<0) return 0;
        if(n==0) return 1;
        if(dp[n]!=-1){
            return dp[n];
        }
        int x=climb(dp,n-1);
        int y=climb(dp,n-2);
        dp[n]=x+y;
        return dp[n];
    }
    int climbStairs(int n) {
        vector<int>dp(n+1,-1);
        int ans=climb(dp,n);
        return ans;
    }
};