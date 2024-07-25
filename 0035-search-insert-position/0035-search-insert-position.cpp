class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int result = 0;
        
        for (int i = nums.size() - 1; i >= 0; i--) {
            if (target > nums[i]) {
                result = i + 1;
                break;
            }
            if (target == nums[i]) {
                result = i;
                break;
            }
        }
        return result;
    }
};