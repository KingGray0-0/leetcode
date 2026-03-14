class Solution {
public:
 vector<string> res;

    void solve(string s, int n) {
        if (s.length() == n) {
            res.push_back(s);
            return;
        }

        for (char c : {'a','b','c'}) {
            if (s.empty() || s.back() != c) {
                solve(s + c, n);
            }
        }
    }
    string getHappyString(int n, int k) {
        solve("", n);
        if (k > res.size()) return "";
        return res[k-1];
    }
};