class Solution {
public:
    int subarraysDivByK(vector<int>& nums, int k) {
        int total=0;
        unordered_map<int,int>mp;
        int prefix=0;
        mp[0]=1;
        for(int i=0;i<nums.size();i++){
            prefix+=nums[i];
            int rem=prefix%k;
            if(rem<0){ 
                rem=k+rem;
            }
            if(mp.count(rem)){
                total+=mp[rem];
                mp[rem]++;
            }
            else{
                mp[rem]++;
            }
        }
        return total;
    }
};