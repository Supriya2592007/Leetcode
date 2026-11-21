class Solution {
public:
    int buy_sell(vector<int>&p,int i,int n,int buy,vector<vector<int>>&dp){
        if(i>=n){
            return 0;
        }
        if(dp[i][buy]!=-1){
            return dp[i][buy];
        }
        if(buy){
            int take=-p[i]+buy_sell(p,i+1,n,0,dp);
            int skip=buy_sell(p,i+1,n,1,dp);
            dp[i][buy]=max(take,skip);
        }
        else{
            int sell=p[i]+buy_sell(p,i+1,n,1,dp);
            int skip=buy_sell(p,i+1,n,0,dp);
            dp[i][buy]=max(sell,skip);
        }
        return dp[i][buy];
    }
    int maxProfit(vector<int>& prices) {
        int n=prices.size();
        vector<vector<int>>dp(n,vector<int>(2,-1));
        int ans=buy_sell(prices,0,n,1,dp);
        return ans;
    }
};