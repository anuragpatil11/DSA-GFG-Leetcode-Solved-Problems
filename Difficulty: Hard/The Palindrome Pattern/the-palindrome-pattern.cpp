//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:

    string pattern(vector<vector<int>> &arr) {
        // Code Here
         
        int n=arr.size();
        int ans=INT_MAX;
        

        // check for ith row and column at once
        for(int i=0 ;i<n; i++){
            int left=0 , right=n-1 ;
            bool flagR=true , flagC=true;
            
            while(left<right){
                if(arr[i][left]!=arr[i][right]) flagR=false;
                if(arr[left][i]!=arr[right][i]) flagC=false;
                left++;
                right--;
            }

            // return if you find any row palindrome
            if(flagR) return to_string(i)+" R";

            //if column is palindrome store in ans
            if(flagC) ans=min(ans,i);
            
        }
        
        if(ans!=INT_MAX) return to_string(ans)+" C";
        return "-1";
    }
};


//{ Driver Code Starts.

int main() {

    int t, n, i, j, flag, k;
    cin >> t;

    while (t--) {
        cin >> n;
        vector<vector<int>> a(n, vector<int>(n));

        for (i = 0; i < n; i++) {
            for (j = 0; j < n; j++)
                cin >> a[i][j];
        }
        Solution ob;
        cout << ob.pattern(a) << endl;
    }
    return 0;
}
// } Driver Code Ends