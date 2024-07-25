//{ Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function template for C++

class Solution {
  public:
    vector<int> printKClosest(vector<int> arr, int n, int k, int x) {
        // code here
          vector<pair<int,int>> temp;
        for(int i=0;i<n;i++)
        {
            temp.push_back({abs(x-arr[i]),-1*arr[i]});
        }
        sort(temp.begin(),temp.end());
        vector<int> ans;
        for(int i=0;i<n && k>0;i++)
        {
            if(temp[i].first==0) continue;
            ans.push_back(-1*temp[i].second);
            k--;
        }
        return ans;
        
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, k, x;
        cin >> n;
        vector<int> arr(n);
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        cin >> k >> x;
        Solution ob;
        auto ans = ob.printKClosest(arr, n, k, x);
        for (auto e : ans) {
            cout << e << " ";
        }
        cout << "\n";
    }
    return 0;
}

// } Driver Code Ends