//{ Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function template for C++

class Solution {
  public:

    string longestCommonPrefix(int N, string arr[]) {
        // your code here
          
        sort(arr, arr+N);
        string ans = "";
        string first = arr[0];
        string last = arr[N-1];
        
        int n = min(first.length(), last.length());
        for(int i = 0 ; i<n; i++){
            if(first[i] == last[i]){
                ans += first[i];
            }
            else{
                break;
            }
        }
        if(ans.empty()) return "-1";
        else return ans;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        string arr[n];
        for (int i = 0; i < n; ++i)
            cin >> arr[i];

        Solution ob;
        cout << ob.longestCommonPrefix(n, arr) << endl;
    }
}

// } Driver Code Ends