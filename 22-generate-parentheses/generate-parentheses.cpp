class Solution {
public:
void paran(int n,string s,int c1,int c2,vector<string>&res){
    if(c2>c1){
        return;
    }
    if(s.size()==2*n){
        if(c1==c2){
            res.push_back(s);
           // m[s]++;
        }
        return;
    }
    paran(n,s+'(',c1+1,c2,res);
    paran(n,s+')',c1,c2+1,res);
}
    vector<string> generateParenthesis(int n) {
        vector<string>res;
       // unordered_map<string,int>m;
        paran(n,"",0,0,res);
        return res;
    }
};