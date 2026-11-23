class Solution {
public:
    bool canJump(vector<int>& nums) {
       if(nums.size()==1){
        return 1;
       }
       int found=nums[0];
       int i=0;
       int m=found;
      for(int i=0;i<=found;i++){
        m=max(m,i+nums[i]);
        if(m!=found){
           found=m;
        }
        if(found>=nums.size()-1){
            return 1;
        }
       }
       return 0;
    }
};