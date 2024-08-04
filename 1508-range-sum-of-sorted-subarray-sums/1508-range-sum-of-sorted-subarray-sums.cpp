class Solution {
public:
    int rangeSum(vector<int>& nums, int n, int left, int right) {
        int sum=0;
        vector<int> vc;
        for (int i=0; i <n; i++)
        {
            int s=0;
            // Pick ending point
            for (int j=i; j<n; j++)
            {
                s+=nums[j];
                vc.push_back(s);
            }
        }
        sort(vc.begin(),vc.end());
         int MOD = 1000000007;
        for(int i=left-1;i<right;i++){
            sum=(sum+vc[i])%MOD;
        }
        return sum;
    }
};