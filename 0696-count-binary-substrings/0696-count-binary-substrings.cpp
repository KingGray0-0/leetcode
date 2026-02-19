class Solution {
public:
    int countBinarySubstrings(string s) {
        int n=s.size();
        int c=1;
        int a=0;
        int r=0;
        for(int i=1;i<n;i++){
             if(s[i-1]==s[i]){
                c++;
             }else{
                r += min(c,a);
                a=c;
                c=1;
             }
            
        }
        r += min(c,a);
        return r;
    }
};