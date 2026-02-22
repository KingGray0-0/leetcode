class Solution {
public:
    int binaryGap(int n) {
        int c=0;
        int p=-1;
        int result =0;
        while(n>0){
            if((n&1)>0){
                result=(p!=-1) ? max(result,c-p):result;
                p=c;
            }
            c++;
            n>>=1;
        }
        return result;
    }
};