class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        // 1) Placement of non-zero
        int k = 0;
        int n = nums.size();
        for (int i = 0; i < n; i++)
        {
            if (nums[i] != 0)
            {
                nums[k] = nums[i];
                k++;
            }
        }
        // 2) Placement of 0s
        for (int i = k; i < n; i++)
        {
            nums[i] = 0;
        }
    }
};