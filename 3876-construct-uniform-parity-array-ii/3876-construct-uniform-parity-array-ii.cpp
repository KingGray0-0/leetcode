class Solution {
public:
    bool uniformArray(vector<int>& nums1) {
         int n = nums1.size();
        if (n == 1) return true;
        bool hasOdd = false, hasEven = false;
        int minOdd = INT_MAX, minEven = INT_MAX;
        
        for (int num : nums1) {
            if (num % 2 == 0) {
                hasEven = true;
                minEven = min(minEven, num);
            } else {
                hasOdd = true;
                minOdd = min(minOdd, num);
            }
        }
        
        if (!hasOdd || !hasEven) return true;
        
        return minOdd < minEven;

    }
};