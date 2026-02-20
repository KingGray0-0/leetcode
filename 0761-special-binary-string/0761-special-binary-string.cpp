class Solution {
public:
string solve(string s){
    vector<string> sp;
    int start=0;
        int sum=0;
        for(int i=0;i<s.size();i++){
            sum+= s[i] == '1' ? 1:-1;
            if(sum==0){
                string a= s.substr(start +1,i-start-1);
                sp.push_back("1"+makeLargestSpecial(a) +"0");
                start =i+1;
            }
        }
        sort(sp.begin(),sp.end(),greater<string>());
        string r;
        for(string &str : sp){
            r+=str;
        }
        return r;

}
    string makeLargestSpecial(string s) {
      return solve(s);
    }
};