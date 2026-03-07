class Solution {
public:
    int minFlips(string s) {
        int n= s.size();
        s=(s+s);
        int r= INT_MAX;
        string s1;
        string s2;
        int c1=0;
        int c2=0;
        for(int i=0;i<2*n;i++){
           s1 += (i%2 ? '0' : '1');
            s2 += (i%2 ? '1' : '0');
        }
        int j=0;
        int i=0;
        while(j < 2*n){
            if(s[j] != s1[j]){
                c1++;
            }
            if(s[j] != s2[j]){
                c2++;
            }
            if(j-i+1 > n){
               if(s[i]!=s1[i]){
                c1--;
            }
             if(s[i]!=s2[i]){
                c2--;
            }
            i++;
            }
             if(j-i+1 == n){
               r= min({r,c1,c2});

            }
            j++;
        }
        return r;
        
    }
};