bool isValid(char* s) {
    char st[10001];
    int top=-1;
    for(int i=0;i<strlen(s);i++){
       if((s[i]=='[')||(s[i]=='{')||(s[i]=='(')){
        st[++top]=s[i];
       }
       else{
        if(top==-1)return 0;
        else{
            if((st[top]=='['&&s[i]==']')||(st[top]=='{'&&s[i]=='}')||(st[top]=='('&&s[i]==')')){
                top--;
            }
            else return 0;
        }
       }
    }
    if(top!=-1){
        return 0;
    }
    else{
        return 1;
    }
}