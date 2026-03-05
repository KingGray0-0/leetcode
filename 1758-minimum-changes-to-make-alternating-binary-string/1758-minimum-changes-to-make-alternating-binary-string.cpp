class Solution {
public:
    int minOperations(string s) {
         int n = s.size();
        
        string s1 = s;
        string s2 = s;

        int c1 = 0, c2 = 0;

        for(int i = 1; i < n; i++){
            if(s1[i-1] == s1[i]){
                if(s1[i] == '0')
                    s1[i] = '1';
                else
                    s1[i] = '0';
                c1++;
            }
        }

        for(int i = n-2; i >= 0; i--){
            if(s2[i] == s2[i+1]){
                if(s2[i] == '0')
                    s2[i] = '1';
                else
                    s2[i] = '0';
                c2++;
            }
        }

        return min(c1, c2);
    }
};