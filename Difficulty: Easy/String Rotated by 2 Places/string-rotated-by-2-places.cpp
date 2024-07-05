//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution
{
    public:
    //Function to check if a string can be obtained by rotating
    //another string by exactly 2 places.
    bool isRotated(string str1, string str2)
    {
        // Your code here
           int len = str1.length();
        if(str1.length() != str2.length() || len <= 1) {
            return false;
        }
        
        string left = str1.substr(2) + str1.substr(0,2);
        string right = str1.substr(len - 2) + str1.substr(0, len - 2);
        
        return (left == str2) || (right == str2);
    }

};


//{ Driver Code Starts.

int main() {
	
	int t;
	cin>>t;
	while(t--)
	{
		string s;
		string b;
		cin>>s>>b;
		Solution obj;
		cout<<obj.isRotated(s,b)<<endl;
	}
	return 0;
}

// } Driver Code Ends