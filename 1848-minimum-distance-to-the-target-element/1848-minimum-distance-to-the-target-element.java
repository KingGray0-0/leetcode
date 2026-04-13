class Solution {
    public int getMinDistance(int[] nums, int target, int start) {
        int n = nums.length;
        int a = 9999;
        int m=9999;
        for(int i=0 ; i<n ; i++){
            if(nums[i]==target){
             m = Math.abs(i - start);
            }
            if(m<=a){
                a=m;
            } 
        }
        return a;

    }
}