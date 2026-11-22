class Solution {
public:
    int buy_sell(vector<int>&p,int i,int n,vector<vector<vector<int>>>&dp,int buy,int chn){
        if(i>=n){
            return 0;
        }
        if(dp[i][buy][chn]!=-1){
            return dp[i][buy][chn];
        }
        if(buy){
            if(chn==0){
                return 0;
            }
            int take=-p[i]+buy_sell(p,i+1,n,dp,0,chn-1);
            int skip=buy_sell(p,i+1,n,dp,1,chn);
            dp[i][buy][chn]=max(take,skip);
        }
        else{
            int sell=p[i]+buy_sell(p,i+1,n,dp,1,chn);
            int skip=buy_sell(p,i+1,n,dp,0,chn);
            dp[i][buy][chn]=max(skip,sell);
        }
        return dp[i][buy][chn];
    }
    int maxProfit(vector<int>& p) {
        int n=p.size();
        vector<vector<vector<int>>>dp(n,vector<vector<int>>(2,vector<int>(3,-1)));
        int ans=buy_sell(p,0,n,dp,1,2);
        return ans;
    }
};