class Solution {
public:
    long long sumAndMultiply(int n) {
        int x=0;
        long long sum=0;
        while (n!=0){
            int a=n%10;
            if(a!=0){
                x=(x*10)+a;
                sum=sum+a;
            }
            n=n/10;
        }
        long long k=0;
        while(x!=0){
            int a=x%10;
            k=(k*10)+a;
            x/=10;
        }
        return k*sum;
    }
};