class Solution {
public:
    int balancedStringSplit(string s) {
        int n=s.size();
        int c=0,r=0;
        for(int i=0;i<n;i++){
            if(s[i]=='L') c++;
            else c--;
            if(c==0) r++;
        }
        return r;
    }
};