class Solution {
public:
    int lengthOfLongestSubstring(string s) {
       vector<bool> v(256, false);  // To store the occurrence of characters
    int l = 0, r = 0, maxLen = 0;

    while (r < s.size()) {
        if (!v[s[r]]) {  // If character at r is not in the window
            v[s[r]] = true;
            maxLen = max(maxLen, r - l + 1);  // Update the max length of the substring
            r++;  // Move the right pointer
        } else {
            // If character at r is a duplicate, remove characters from the left
            v[s[l]] = false;
            l++;  // Move the left pointer
        }
    }

    return maxLen;
    }
};