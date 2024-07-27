class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        vector <int> vc;
        unordered_map<int,int> mp;
        for(int i=0;i<nums1.size();i++){
            mp[nums1[i]]++;
        }
        
        for(auto x:nums2){
            if(mp.find(x)!=mp.end() && mp[x]>0){
                vc.push_back(x);
                mp[x]--;
            }
        }    
        return vc;
    }
};