//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function template for C++

class Solution {
  public:
    string rremove(string s) {
        // code here
          string m;
        int i=0;
        for(int i=0;i<s.length();i++){
            
            if((s[i]!=s[i+1]|| i==s.length()-1) && (s[i]!=s[i-1]|| i==0)){
                m.push_back(s[i]);
            
            }
        }

        if(m==s){return m;}
        return rremove(m);
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    string tc;
    getline(cin, tc);
    t = stoi(tc);
    while (t--) {
        string s;
        getline(cin, s);
        Solution ob;
        cout << ob.rremove(s) << "\n";
    }
    return 0;
}
// } Driver Code Ends