class Solution {
public:
    bool rotateString(string s, string goal) {
        // Check if the sizes of the strings are different
    if (s.size() != goal.size()) {
        return false;
    }
    
    // Append s to itself
    string temp = s + s;
    
    // Check if goal is a substring of temp
    if (temp.find(goal) != string::npos) {
        return true;
    }
    
    return false;
    }
};