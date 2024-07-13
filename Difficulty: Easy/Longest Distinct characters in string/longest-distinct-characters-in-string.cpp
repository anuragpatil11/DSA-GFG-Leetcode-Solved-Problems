//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;
int longestSubstrDistinctChars (string S);
int main()
{
    int t; cin >> t;
    while (t--)
    {
        string S; cin >> S;

        cout << longestSubstrDistinctChars (S) << endl;
    }
}

// Contributed By: Pranay Bansal

// } Driver Code Ends


int longestSubstrDistinctChars (string S)
{
    // your code here
    unordered_map<char,int>mp;
    int c=0;
    for(int l=0,i=0;i<S.size();i++){
        mp[S[i]]++;
        while(mp[S[i]]>1){
            --mp[S[l++]];
        }
        c=max(c,i-l+1);    
    }
    
    return c;
}