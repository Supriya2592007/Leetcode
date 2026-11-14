class Solution {
public:
    int robber(vector<int>&nums,int n,int i,vector<int>&dp){
        if(i>=n){
            return 0;
        }
        if(dp[i]!=-1){
            return dp[i];
        }
        int take=nums[i]+robber(nums,n,i+2,dp);
        int skip=robber(nums,n,i+1,dp);
        dp[i]=max(take,skip);
        return dp[i];
    }
    int rob(vector<int>& nums) {
        int n=nums.size();
        vector<int>dp(n,-1);
        int ans=robber(nums,n,0,dp);
        return ans;
    }
};