class Solution {
public:
    vector<string> findWords(vector<string>& words) {
        map<char, int> mp;
        string a = "qwertyuiopQWERTYUIOP";
        string b = "asdfghjklASDFGHJKL";
        string c = "zxcvbnmZXCVBNM";
        
        for (char &i : a) mp[i] = 1;
        for (char &i : b) mp[i] = 2;
        for (char &i : c) mp[i] = 3;
        
        vector<string> res;
        for (auto &w : words) {
            int f = mp[w[0]], ok = 1;
            for (auto &i : w) if (mp[i] != f) {ok = 0; break;}
            if (ok) res.push_back(w);
        }
        
        return res;
    }
};