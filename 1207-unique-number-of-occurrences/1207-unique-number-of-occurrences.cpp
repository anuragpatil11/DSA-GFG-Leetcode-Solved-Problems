class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        unordered_map<int,int>mp;
        unordered_map<int,int>mp2;
        for(int i=0;i<arr.size();i++)
            mp[arr[i]]++;

        for(auto it:mp){
            if(mp2.find(it.second)!=mp2.end()){
                return false;
            }
            mp2[it.second]++;
        }
        return true;
     }
};