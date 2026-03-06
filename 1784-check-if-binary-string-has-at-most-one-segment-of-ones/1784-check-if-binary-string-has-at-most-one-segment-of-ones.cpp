class Solution {
public:
    bool checkOnesSegment(string s) {
        int n= s.size();
        if(s[0]=='0') return false;
        bool iszero = false;
        for(int i=0;i<n;i++){
            if(s[i]=='1'){
                    if(iszero == true ) return false;
            }else iszero = true;
        }
        return true;
    }
};