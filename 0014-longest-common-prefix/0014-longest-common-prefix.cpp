class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        if (strs.empty()) {
        return "";
    }

    string ans = strs[0];  // Start with the first string as the common prefix

    for (int i = 1; i < strs.size(); i++) {
        int j = 0;
        // Compare ans with each string and update the common prefix
        while (j < ans.length() && j < strs[i].length() && ans[j] == strs[i][j]) {
            j++;
        }
        ans = ans.substr(0, j);  // Update ans to the common prefix length so far
        if (ans.empty()) {
            return "";  // If at any point the common prefix becomes empty, return ""
        }
    }

    return ans;
        
    }
};