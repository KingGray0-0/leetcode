class Solution {
public:
    string invert(string s){
        int n= s.size();
        for(int i=0;i<n;i++){
            if(s[i]=='0'){
                s[i]= '1';
            }else {
                s[i]= '0';
            }
        }
        return s;
    }
    char findKthBit(int n, int k) {
       vector<string> s;
       s.push_back("0");
       string a= s[0];
       for(int i=1;i<n;i++){
        string temp = invert(s[i-1]);
        reverse(temp.begin(), temp.end());
        a=s[i-1] + "1" + temp;
        s.push_back(a);
       }
      return s[n-1][k-1];

    }
};