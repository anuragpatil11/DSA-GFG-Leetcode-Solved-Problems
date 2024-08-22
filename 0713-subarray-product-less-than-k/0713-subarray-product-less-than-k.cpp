class Solution {
public:
    int numSubarrayProductLessThanK(vector<int>& nums, int k) {
       if (k <= 1) return 0; // If k <= 1, no product can be less than k
    int total = 0;
    int product = 1;
    int i = 0;
    
    for (int j = 0; j < nums.size(); j++) {
        product *= nums[j];
        
        while (product >= k && i <= j) {
            product /= nums[i];
            i++;
        }
        
        // Add the count of subarrays that end at index j
        total += (j - i + 1);
    }
    
    return total;
    }
};