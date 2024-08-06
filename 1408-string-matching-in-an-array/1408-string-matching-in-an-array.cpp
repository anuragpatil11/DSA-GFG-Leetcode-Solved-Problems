class Solution {
public:
    vector<string> stringMatching(vector<string>& words) {
        unordered_set<string>s;

        for(int i = 0; i < words.size(); ++i) {
            for(int j = 0; j < words.size(); ++j) {
                if(i != j && words[i].find(words[j]) != string::npos) {
                    s.insert(words[j]);
                }
            }
        }

        return vector<string>(s.begin(),s.end());
    }
};