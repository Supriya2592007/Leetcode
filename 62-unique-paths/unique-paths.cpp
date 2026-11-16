class Solution {
public:
    int check(vector<vector<int>>&dp,int m,int n,int i,int j){
        if(i>=m||j>=n){
            return 0;
        }
        if(i==(m-1)&&j==(n-1)){
            return 1;
        }
        if(dp[i][j]!=-1){
            return dp[i][j];
        }
        int down=check(dp,m,n,i+1,j);
        int right=check(dp,m,n,i,j+1);
        dp[i][j]=down+right;
        return dp[i][j];
    }
    int uniquePaths(int m, int n) {
        vector<vector<int>>dp(m,vector<int>(n,-1));
        int ans=check(dp,m,n,0,0);
        return ans;
    }
};