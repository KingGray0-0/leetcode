class Solution {
public:
    int maxProduct(int n) {
        int c=0;
        vector<int>arr;
        while(n!=0){
            arr.push_back(n%10);
            n=n/10;
        }
        c=arr.size();
        sort(arr.begin(),arr.end());
        int r=arr[c-1]*arr[c-2];
        return r;
    }
};