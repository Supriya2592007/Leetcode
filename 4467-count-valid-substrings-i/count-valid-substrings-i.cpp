class Solution {
public:
    long long countValidSubstrings(string s) {
        long long sum=0;
        long long n=s.size();
        long long total=n*(n+1)/2;
        long long t=-1;
        set<char>st;
        for(int i=0;i<s.size();i++){
            if(i>=2 and s[i]=='c' and s[i-1]=='b' and s[i-2]=='a') t=i;
         if(t!=-1){
    sum+=(t-2+1);
}
        }
        return total-sum;
    }
};