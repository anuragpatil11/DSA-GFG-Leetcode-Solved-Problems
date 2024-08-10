class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        int nonDup;
        unordered_map<int,int> mp;
        for(int i=0;i<nums.size();i++){
            mp[nums[i]]++;
        }
        for(auto i:mp){
            if(i.second == 1){
                nonDup = i.first;
            }
        }
        return nonDup;
    }
};