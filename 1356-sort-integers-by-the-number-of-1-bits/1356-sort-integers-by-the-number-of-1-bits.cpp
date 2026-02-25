class Solution {
public:
    vector<int> sortByBits(vector<int>& arr) {
       vector<pair<int,int>>p;
        for(int i=0;i<arr.size();i++){
         p.push_back({arr[i],__builtin_popcount(arr[i])});
        }
  sort(p.begin(), p.end(), [](const auto& a, const auto& b) {
            if(a.second == b.second)
                return a.first < b.first;
            return a.second < b.second;
        });
    vector<int> v;
    for(int i=0;i<arr.size();i++){
        v.push_back(p[i].first);
    }
    return v;
    }
};