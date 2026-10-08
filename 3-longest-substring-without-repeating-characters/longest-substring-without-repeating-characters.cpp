class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int maxi=0;
        int cnt=0;
        int i=0,j=0;
        unordered_map<char,int>m;
        while(j<s.size()){
            if(m[s[j]]<=0){
                m[s[j]]++;
                cnt++;
                j++;
            }
            else{
                maxi=max(maxi,cnt);
                cnt--;
                m[s[i]]--;
                i++;
            }
        }
        maxi=max(maxi,cnt);
        return maxi;
    }
};