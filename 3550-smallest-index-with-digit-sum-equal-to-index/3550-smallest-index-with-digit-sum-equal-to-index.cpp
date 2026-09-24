class Solution {
public:
    int smallestIndex(vector<int>& nums) {
        int n = nums.size();
        for(int i=0;i<n;i++){
            if(nums[i] %10 == nums[i] && nums[i]==i) return i;
           
            else{
            int a= nums[i];
            int s=0;
            while(a>0){
                s = s + a%10;
                a=a/10;
            }
            if(s==i) return i;
            }
        }
        return -1;
    }
};