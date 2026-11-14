class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int maxi=*max_element(nums.begin(),nums.end());
        int mx=INT_MIN;
        int sum=0;
        for(int i=0;i<nums.size();i++){
            sum=sum+nums[i];
            if(sum>=0){
                mx=max(mx,sum);
            }
            else{
                sum=0;
            }
        }
        if(mx!=INT_MIN){
        return mx;
        }
        return maxi;
    }
};