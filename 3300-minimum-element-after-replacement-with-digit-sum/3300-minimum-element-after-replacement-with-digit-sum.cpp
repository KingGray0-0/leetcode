class Solution {
public:
    int minElement(vector<int>& nums) {
        int n= nums.size();
        int sum =99999;
        for(int i=0;i<n;i++){
            int a=nums[i];
            int b=0;
            while(a!=0){
                b=a%10 +b;
                a=a/10;
            }
            if(b<=sum){
                sum=b;
            }
        }
        return sum;
    }
};