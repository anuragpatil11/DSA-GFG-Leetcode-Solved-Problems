class Solution {
public:
    bool isPrefixString(string s, vector<string>& words) {
       string res="";
       for (auto &j:words)
       {
           res+=j;
           if (res==s) return true;
           if (res.length()>s.length()) return false;
       } 
       return false;
    }
};