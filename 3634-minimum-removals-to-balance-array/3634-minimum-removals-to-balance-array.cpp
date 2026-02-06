class Solution {
public:
    int minRemoval(vector<int>& nums, int k) {
        int n=nums.size();
        if(n==1) return 0;
        sort(nums.begin(),nums.end());
        int i=0;
        int c=0;
        for(int j=0;j<n;j++){
            while(nums[j]>(long long)k*nums[i]){
                i++;
            }
            c= max(c, j - i + 1);
        }
        return n-c;
    }
};