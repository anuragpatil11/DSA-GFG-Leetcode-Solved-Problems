//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template for C++

class Solution{
  public:
    char nthCharacter(string s, int r, int n) {
        //code here
           int i = 0;
        
        while(i < r){
            string newstr;
            
            for(auto i : s){
                if(i== '0' && newstr.length() <= n){
                    newstr.push_back('0');
                    newstr.push_back('1');
                }
                else if (i == '1' && newstr.length() <= n){
                    newstr.push_back('1');
                    newstr.push_back('0');
                }
                else break;
            }
            s = newstr;
            i++;
        }
        return s[n];
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int R, N;
        string S;
        cin >> S >> R >> N;
        Solution ob;
        cout << ob.nthCharacter(S, R, N) << endl;
    }
    return 0;
}
// } Driver Code Ends