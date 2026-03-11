class Solution {
public:
    int bitwiseComplement(int n) {
        string s = "";
        if(n==0) return 1;
        while(n>0){
            char a=(n%2) + '0';
            s= a+s;
            n=n/2;

        }
        int a= s.size();
        for(int i=0;i<a;i++){
            if(s[i]=='0') s[i]='1';
            else s[i] = '0';
        }
        int b=0;
       for(int i=0;i<a;i++){
           b = b * 2 + (s[i] - '0');
       }
       return b;
    }
};