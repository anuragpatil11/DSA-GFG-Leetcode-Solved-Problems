class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
    int i = 0;
    int j = nums.size() - 1;
    int a = -1, b = -1;

    // Find the first occurrence of the target
    while (i <= j) {
        if (nums[i] == target && a == -1) {
            a = i;  // Mark the first occurrence
        }
        if (nums[j] == target && b == -1) {
            b = j;  // Mark the last occurrence
        }

        // If both a and b are set, break the loop
        if (a != -1 && b != -1) {
            break;
        }

        // Move the pointers inward
        if (a == -1) i++;  // Increment `i` if the first occurrence is not found
        if (b == -1) j--;  // Decrement `j` if the last occurrence is not found
    }

    return {a, b};
    }
};