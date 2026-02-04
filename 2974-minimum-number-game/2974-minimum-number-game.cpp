class Solution {
public:
    vector<int> numberGame(vector<int>& nums) {
        vector<int> arr;
        int n=nums.size();
        sort(nums.begin(),nums.end());
        for(int i=0;i<n;i=i+2){
            int a=nums[i];
            int b=nums[i+1];
            arr.push_back(b);
            arr.push_back(a);    
            }
        return arr;
    }
};