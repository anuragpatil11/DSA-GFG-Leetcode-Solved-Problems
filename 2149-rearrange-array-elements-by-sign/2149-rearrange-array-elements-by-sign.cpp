class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
      vector<int> vc(nums.size()); // Create a vector with the same size as nums
    int posIndex = 0; // Index for placing positive numbers
    int negIndex = 1; // Index for placing negative numbers

    for (int i = 0; i < nums.size(); i++) {
        if (nums[i] > 0) {
            vc[posIndex] = nums[i];
            posIndex += 2; // Move to the next position for a positive number
        } else {
            vc[negIndex] = nums[i];
            negIndex += 2; // Move to the next position for a negative number
        }
    }
    
    return vc;
    }
};