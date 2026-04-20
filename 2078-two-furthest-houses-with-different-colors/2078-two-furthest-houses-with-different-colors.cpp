class Solution {
public:
    int maxDistance(vector<int>& colors) {
        int n=colors.size();
        int result=0;
        if(colors[0]!=colors[n-1]) return n-1;
        
            for(int i=0;i<n;i++){
                for(int j=i;j<n;j++){
                    if(colors[i]!=colors[j]){
                        result=max(result,abs(j-i));
                    }
                }
            }
        return result;
    }
};