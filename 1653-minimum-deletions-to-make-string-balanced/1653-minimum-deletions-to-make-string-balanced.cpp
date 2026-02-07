class Solution {
public:
    int minimumDeletions(string s) {
        int n= s.size();
        int b=0;
        int d=0;
        for(int i=0;i<n;i++){
            if(s[i]=='b'){
                b++;
            }
            else{
                d= min(d+1,b);
            }
        }
        return d;
    }
};