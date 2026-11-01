class Solution {
public:
    int reverse(int x) {
        bool f= x>0;
        long long num;
        if(x==(-2147483648)){
            num=x;
        }
        else{
            num=max(x,-1*x);
        }
        long long rev=0;
        while(num){
            rev=rev*10+(num%10);
            num/=10;
        }
        if(!f){
           rev=-rev;
        }
       if(rev>=(pow(2,31))||rev<=-pow(2,31)) return 0;
       else{
        return rev;
       }
    }
};