class Solution {
public:
    int search(vector<int>& nums, int target) {
         int n = nums.size();
    int l = 0;
    int h = n - 1;
    
    while (l <= h) {
        int mid = l + (h - l) / 2;  // Avoids potential overflow
        
        if (nums[mid] == target) {
            return mid;
        } else if (nums[mid] < target) {
            l = mid + 1;
        } else {
            h = mid - 1;
        }
    }
    
    return -1;  // Target not found
    }
};