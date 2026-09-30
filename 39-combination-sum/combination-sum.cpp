class Solution {
public:
    void is_tar(vector<vector<int>>&res,vector<int>v_in,vector<int>& v,int tar,int sum,int i){
        if(i==v.size()||sum>tar){
           if(sum==tar){
                res.push_back(v_in);
            return;
           }
           return;
        }
        if(sum==tar){
            res.push_back(v_in);
            return;
        }
        v_in.push_back(v[i]);
        is_tar(res,v_in,v,tar,sum+v[i],i);
        v_in.pop_back();
         is_tar(res,v_in,v,tar,sum,i+1);
    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target){
        vector<vector<int>>ans;
        vector<int>v;
        is_tar(ans,v,candidates,target,0,0);
        return ans;
    }
};