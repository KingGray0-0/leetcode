class Solution {
public:
    int minPartitions(string n) {
        int m=0;
        for(int i=0;i<n.size();i++){
            int a=(int)n[i];
            if(a>=m) m=a;
        }
        return m-48;
    }
};