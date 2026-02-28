class Solution {
public:
int m= 1e9 + 7;
    int concatenatedBinary(int n) {
        long result =0;
        for(int i=1;i<=n;i++){
            int d = log2(i) + 1;
            result = ((result << d)% m + i)% m;
        }
        return result;
    }
};