class Solution {
public:
    string sortSentence(string s) {
         vector<string> ans(10);  // Assume there are at most 9 words (as per the problem description)
    int count = 0;
    string temp = "";

    for (int i = 0; i <= s.size(); i++) {
        if (i == s.size() || s[i] == ' ') {
            // Find the position based on the last character in temp
            int pos = temp.back() - '0';  // Extract the position digit
            temp.pop_back();  // Remove the position digit from the word
            ans[pos] = temp;  // Place the word in the correct position
            temp.clear();  // Clear temp for the next word
            count++;  // Keep track of how many words we have seen
        } else {
            temp += s[i];  // Build the current word
        }
    }

    string result = "";
    // Combine the words in sorted order
    for (int i = 1; i <= count; i++) {
        result += ans[i];
        if (i != count) {
            result += " ";  // Add space between words
        }
    }

    return result;
        
    }
};