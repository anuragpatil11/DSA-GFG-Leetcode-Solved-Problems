class Solution {
public:
    vector<int> countBits(int n) {
       vector<int> ans(n+1);
        ans[0]=0;
        for(int i=0;i<=n;i++){
           
            ans[i]=ans[i/2]+i%2;
        }
        // ans.push_back(sum);   
    // for (int i = 1; i <= n; ++i) {
    //     ans[i] = ans[i >> 1] + (i & 1);
    // }
    return ans;
    }
};
