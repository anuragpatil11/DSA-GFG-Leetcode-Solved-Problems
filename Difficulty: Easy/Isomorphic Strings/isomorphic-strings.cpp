//{ Driver Code Starts
// C++ program to check if two strings are isomorphic


#include<bits/stdc++.h>


using namespace std;
#define MAX_CHARS 256

// } Driver Code Ends
class Solution
{
    public:
    //Function to check if two strings are isomorphic.
    bool areIsomorphic(string s1, string s2)
    {
        
        // Your code here
          if(s1.size() != s2.size())
        return 0;
        
        map<char,char>m1,m2;
        
        for(int i=0; i<s1.size(); i++){
            
            if(m1[s1[i]]==0&&m2[s2[i]]==0)
            {
                
                m1[s1[i]]=s2[i];
                m2[s2[i]]=s1[i];
            }
            
            if(m1[s1[i]]!=s2[i] && m2[s2[i]] != s1[i])
            return 0;
        }
        
        return 1;
        
    }
};

//{ Driver Code Starts.

// Driver program
int main()
{
    int t;
    cin>>t;
    string s1,s2;
    while (t--) {
        cin>>s1;
        cin>>s2;
        Solution obj;
        cout<<obj.areIsomorphic(s1,s2)<<endl;
    }
    
    return 0;
}
// } Driver Code Ends