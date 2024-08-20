class Solution {
public:
    int lengthOfLongestSubstring(string s) {
       vector<bool> v(256,0);
        int l=0,r=0,maxLen=0;
        while(r<s.size()){
            if(v[s[r]]!=1){
                v[s[r]]=1;
                 maxLen=max(maxLen,r-l+1);
                r++;
            }
            else{
            
            while(v[s[r]]>=1){
                v[s[l]]=0;
                l++;
            }
            }
           
        }
            return maxLen;
    }
};