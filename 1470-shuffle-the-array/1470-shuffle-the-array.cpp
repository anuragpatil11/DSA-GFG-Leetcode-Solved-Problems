class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        int size=2*n;
        vector<int> arr(size);
        int count=0;
        int count1=1;

        for(int i=0;i<nums.size();i++){
            if(i<n){
                arr[count] = nums[i];
                count=count+2;
            }
            else{
                arr[count1]=nums[i];
                count1=count1+2;
            }
        }
        return arr;
       
    }
};