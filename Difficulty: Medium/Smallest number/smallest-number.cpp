//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++
class Solution {
  public:
    string smallestNumber(int s, int d) {
        // code here
           string ans="";
    if(s>9*d)return "-1";
    s--;
      while(d>0)
      {
         if(d==1)
         {
            s+=1;
            ans+='0'+s;
         }
        else if(s<9)
        {
            ans+='0'+s;
            s=0;
            
        }
        else
        {
            ans+='9';
            s-=9;
        }
        d--;
      }
      reverse(ans.begin(),ans.end());
      return ans;
    }
};

//{ Driver Code Starts.

int main() {

    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        int s, d;
        cin >> s >> d;
        Solution ob;
        cout << ob.smallestNumber(s, d) << "\n";
    }

    return 0;
}
// } Driver Code Ends