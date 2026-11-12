class Solution {
public:
    int longestMonotonicSubarray(vector<int>& nums) {
        int i=0,j=1;
        int n=nums.size();
        int cnt=0;
        int inc_max=0;
        int dec_max=0;
        while(i<n&&j<n){
            if(nums[i]<nums[j]){
                cnt++;
            }
            else{
                inc_max=max(inc_max,cnt+1);
                cnt=0;
            }
            i++;
            j++;
        }
        inc_max=max(inc_max,cnt+1);
        cnt=0;
        i=0,j=1;
        while(i<n&&j<n){
            if(nums[i]>nums[j]){
                cnt++;
            }
            else{
                dec_max=max(dec_max,cnt+1);
                cnt=0;
            }
            i++;
            j++;
            
        }
         dec_max=max(dec_max,cnt+1);
         return max(dec_max,inc_max);
    }
};