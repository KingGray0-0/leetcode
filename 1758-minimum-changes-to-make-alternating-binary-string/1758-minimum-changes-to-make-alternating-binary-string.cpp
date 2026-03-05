class Solution {
public:
    int minOperations(string s) {
        int n = s.size();
        int c1=0;
        int c2=0;

        for(int i=0 ;i<n;i++){
            if(i%2==0){
                if(s[i]!='0') c1++;
                if(s[i]!='1') c2++;

            }else{
                if(s[i]!='1') c1++;
                if(s[i]!='0') c2++;
            }
        }
        if(c1<=c2) return c1;
        else return c2; 
    }
};