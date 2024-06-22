//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
    long long ExtractNumber(string s) {

        // code here
        long long ans=-1;
        string t;
        for(int i=0;i<s.size();i++){
        if(s[i]>='0'&&s[i]<='8'){
            t+=s[i];
        } 
        else{
             if(t.size()){
                 ans=max(ans,1LL*(stol(t)));
            }
            t.erase();
        }
     }
     
     return ans;
    }
};

//{ Driver Code Starts.
int main() {

    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);

    int t;
    string tc;
    getline(cin, tc);
    t = stoi(tc);
    while (t--) {
        string s;
        getline(cin, s);

        Solution ob;
        cout << ob.ExtractNumber(s) << "\n";
    }

    return 0;
}

// } Driver Code Ends