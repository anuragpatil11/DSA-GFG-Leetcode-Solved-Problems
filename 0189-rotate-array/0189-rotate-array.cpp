class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        
        int n=nums.size();
        vector<int> temp(n);
//         k=k%n;
//          // Reverse the entire array
//         reverse(nums.begin(), nums.end());
        
//         // Reverse the first k elements
//         reverse(nums.begin(), nums.begin() + k);
        
//         // Reverse the rest of the elements after k
//         reverse(nums.begin() + k, nums.end());
        for(int i=0;i<n;i++){
            temp[(i+k)%n]=nums[i];
        }
        nums=temp;
    }
};