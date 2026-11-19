class Solution {
public:
    int mini_sum(vector<vector<int>>&v,vector<vector<int>>&dp,int i,int j,int n){
        if(j<0||j>=n||i>=n){
            return INT_MAX;
        }
        if(dp[i][j]!=-101){
            return dp[i][j];
        }
        int left=mini_sum(v,dp,i+1,j-1,n);
        int bot=mini_sum(v,dp,i+1,j,n);
        int right=mini_sum(v,dp,i+1,j+1,n);
        dp[i][j]=v[i][j]+min(left,min(bot,right));
        return dp[i][j];
    }
    int minFallingPathSum(vector<vector<int>>& matrix) {
         int n=matrix.size();
        vector<vector<int>>dp(n,vector<int>(n,-101));
        for(int j=0;j<n;j++){
            dp[n-1][j]=matrix[n-1][j];
        }
        int mini=INT_MAX;
        for(int j=0;j<n;j++){
            int res=mini_sum(matrix,dp,0,j,n);
            mini=min(res,mini);
        }
        cout<<n<<endl;
        return mini;
    }
};