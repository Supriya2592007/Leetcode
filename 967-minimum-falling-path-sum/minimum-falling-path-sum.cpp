class Solution {
public:
    int minFallingPathSum(vector<vector<int>>& v) {
         int n=v.size();
        vector<vector<int>>dp(n,vector<int>(n,-1));
        for(int j=0;j<n;j++){
            dp[n-1][j]=v[n-1][j];
        }
       for(int i=(n-2);i>=0;i--){
        for(int j=0;j<n;j++){
            int mini=INT_MAX;
            int c1=j-1;
            if(c1>=0&&c1<n){
                mini=min(mini,dp[i+1][c1]);
            }
              c1=j;
            if(c1>=0&&c1<n){
                mini=min(mini,dp[i+1][c1]);
            }
              c1=j+1;
            if(c1>=0&&c1<n){
                mini=min(mini,dp[i+1][c1]);
            }
            dp[i][j]=v[i][j]+mini;
        }
       }
       for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<dp[i][j]<<" ";
        }
        cout<<endl;
       }
       int mini=INT_MAX;
       for(int j=0;j<n;j++){
        mini=min(mini,dp[0][j]);
       }
       return mini;
    }
};