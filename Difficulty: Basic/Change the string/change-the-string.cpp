//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution{
    public:
    
    string modify (string s)
    {
        if (s.empty()) {
        return s;  // If the string is empty, return it as is.
    }

    // Check if the first character is uppercase or lowercase
    if (isupper(s[0])) {
        // Convert the entire string to uppercase
        for (int i = 0; i < s.size(); i++) {
            s[i] = toupper(s[i]);
        }
    } else {
        // Convert the entire string to lowercase
        for (int i = 0; i < s.size(); i++) {
            s[i] = tolower(s[i]);
        }
    }

    return s;
    }
};

//{ Driver Code Starts.
int main()
{
    int t; cin >> t;
    while (t--)
	{
		string s; cin >> s;
		Solution ob;
		cout << ob.modify (s) << endl;
	}
}
// } Driver Code Ends