class Solution {
public:
    vector<int> constructTransformedArray(vector<int>& nums) {
        int n=nums.size();
        vector<int> r(n);
        for(int i=0;i<n;i++){
            int newIndex = ((i + nums[i]) % n + n) % n;
            r[i] = nums[newIndex];
        }
        return r;
    }
};