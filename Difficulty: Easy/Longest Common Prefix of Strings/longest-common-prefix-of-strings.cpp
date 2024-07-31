//{ Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function template for C++

class Solution {
  public:

    string longestCommonPrefix(vector<string> arr) {
        // your code here
        sort(arr.begin(),arr.end());
        string ans = "";
        
        int i = 0;
        int n = arr[0].length();
        int m = arr[arr.size()-1].length();
        string first = arr[0];
        string last = arr[arr.size()-1];
        
        while(i<n && i<m){
            if(first[i]!=last[i]){
                break;
            }
            ans += first[i];
            i++;
        }
        
        if(ans.length()==0){
            return "-1";
        }
        return ans;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        vector<string> arr;
        string input;
        getline(cin, input);
        stringstream ss(input);
        string number;
        while (ss >> number) {
            arr.push_back(number);
        }

        Solution ob;
        cout << ob.longestCommonPrefix(arr) << endl;
    }
}

// } Driver Code Ends