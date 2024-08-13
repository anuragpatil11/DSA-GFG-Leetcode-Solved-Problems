class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        // int prod=1;
        int n=nums.size();
        int prefix[n];
        int suffix[n];
        vector<int> result(n, 1);
        prefix[0]=1;
        for(int i=1;i<n;i++){
            prefix[i]=prefix[i-1]*nums[i-1];
        }
        suffix[n-1]=1;
        for(int j=n-2;j>=0;j--){
            suffix[j]= suffix[j+1]*nums[j+1];
        }
        
        for(int i=0;i<n;i++){
            result[i]=prefix[i]*suffix[i];
        }
        return result;
    }
};