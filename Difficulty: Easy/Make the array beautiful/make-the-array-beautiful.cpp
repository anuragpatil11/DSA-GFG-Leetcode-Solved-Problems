//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
    vector<int> makeBeautiful(vector<int> arr) {
        // code here
        stack<int> temp;
        for(int i=0;i<arr.size();i++){
            if(temp.empty()){
                temp.push(arr[i]);
            }
            else if(arr[i]>=0 && temp.top()>=0 || arr[i]<0 && temp.top()<0){
                temp.push(arr[i]);
            }
            else{
                temp.pop();
            }
        }
        vector<int>ans;
        while(!temp.empty()){
            ans.push_back(temp.top());
            temp.pop();
        }
        
        reverse(ans.begin(),ans.end());
        
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
        vector<int> arr(n);
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }

        Solution obj;
        vector<int> res = obj.makeBeautiful(arr);
        for (int i = 0; i < res.size(); i++) {
            cout << res[i] << " ";
        }

        cout << "\n";
    }
}
// } Driver Code Ends