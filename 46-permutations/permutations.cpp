class Solution {
public:
    void check(vector<int>&nums,vector<bool>&vis,vector<int>v,vector<vector<int>>&ans){
        if(v.size()==nums.size()){
            ans.push_back(v);
            return;
        }
        for(int i=0;i<nums.size();i++){
            if(vis[i]==false){
                vis[i]=true;
                v.push_back(nums[i]);
                check(nums,vis,v,ans);
                v.pop_back();
                vis[i]=false;
            }
        }
    }
    vector<vector<int>> permute(vector<int>& nums) {
        vector<bool>vis(nums.size(),false);
        vector<vector<int>>ans;
        check(nums,vis,{},ans);
        return ans;
    }
};