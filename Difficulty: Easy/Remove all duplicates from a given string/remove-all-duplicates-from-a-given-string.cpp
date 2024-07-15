//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;


// } Driver Code Ends
//User function template for C++
class Solution{
public:
	string removeDuplicates(string str) {
	    // code here
	      int len = str.length();
        
        if(len == 1)
        return str;
        
        string new_string = "";
        
        for(int i = 0 ; i < len ; i++)
        {
            if(str.find(str[i]) == i)
            new_string = new_string + str[i];
        }
        
        return new_string;
	}
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        string str;
        cin >> str;
        Solution ob;
        auto ans = ob.removeDuplicates(str);

        cout << ans << "\n";
    }
    return 0;
}
// } Driver Code Ends