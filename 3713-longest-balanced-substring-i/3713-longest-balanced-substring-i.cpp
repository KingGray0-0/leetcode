class Solution {
public:
    int longestBalanced(string s) {
       int n = s.size();
    int ans = 0;

    for (int i = 0; i < n; i++) {
        vector<int> freq(26, 0);
        int d = 0;
        int m = 0;

        for (int j = i; j < n; j++) {
            int idx = s[j] - 'a';

            if (freq[idx] == 0)
                d++;

            freq[idx]++;
            m = max(m, freq[idx]);

            int l = j - i + 1;

            if (l == d * m)
                ans = max(ans, l);
        }
    }

    return ans; 
    }
};