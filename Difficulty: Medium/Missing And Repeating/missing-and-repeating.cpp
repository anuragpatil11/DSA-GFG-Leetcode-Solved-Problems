//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

// } Driver Code Ends
class Solution{
public:
    vector<int> findTwoElement(vector<int> A, int n) {
        // code here
        // unordered_map<int,int> mp;
        // for(int i=0;i<n;i++){
        //     mp[arr[i]]++;
            
        // }
        // int a,b;
        // for(auto i:mp){
        //     if(i.second>1){
        //         a=i.first;
        //         break;
        //     }
        // }
        // for(int i=1;i<=n;i++){
        //     if(mp[i]==0){
        //         b=i;
        //         break;
        //     }
        // }
        // return {a,b};
        //  int n = A.size();
    //make a vector have a size 1 more than array as thier isn't a 0 in our input array
    //all initialised with 0
     vector<int> freq(n+1,0);
    // create a ans vector to store ans
    vector<int> ans;
    for(int i=0;i<n;i++){
      //fill 1 where it doesn't
        if(freq[A[i]] == 0){
           freq[A[i]] +=1;
        }
        else{
            //if thier isn't any 0 then just push this in ans as this is the repeting one
            ans.push_back(A[i]);
        }
    }
    //now just check from 1 to n+1 which index have 0 means it's missing one
    for(int i=1;i<n+1;i++){
        if(freq[i]==0){
           ans.push_back(i);
        }
    }
    return ans;

    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        Solution ob;
        auto ans = ob.findTwoElement(a, n);
        cout << ans[0] << " " << ans[1] << "\n";
    }
    return 0;
}
// } Driver Code Ends