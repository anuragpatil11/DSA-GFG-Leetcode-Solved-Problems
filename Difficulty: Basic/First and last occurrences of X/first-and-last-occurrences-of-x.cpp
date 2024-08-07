//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    vector<int> firstAndLast(vector<int> &arr, int n, int x) {
        // Code here
        int i,p=-1,q=-1,flag=1;
        for(i=0;i<n;i++)
        {
             if(arr[i]==x)
             {
                p=i;
                flag=1;
                break;
            }
        }
        for(i=n-1;i>=0;i--)
        {
             if(arr[i]==x)
             {
                q=i;
                break;
            }
        }
        if(p!=-1 and q!=-1)
        {
           return {p,q};
        }
        else 
        {
            return {-1};
        }
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, x;
        cin >> n >> x;
        vector<int> arr(n);
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }

        Solution obj;
        vector<int> ans= obj.firstAndLast(arr, n, x) ;
        for(int i:ans){
            cout<<i<<" ";
        }
        cout<< endl;
    }
    return 0;
}

// } Driver Code Ends