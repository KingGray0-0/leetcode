class Solution {
public:
    int minOperations(vector<int>& nums) {
        int n= nums.size();
        int a=0;
        for(int i=1;i<n;i++){
            if(nums[i-1]>=nums[i]){ 
                a=a+nums[i-1]-nums[i]+1;
                nums[i]=nums[i]+(nums[i-1]-nums[i]+1);
                }
        }
        return a;
    }
};