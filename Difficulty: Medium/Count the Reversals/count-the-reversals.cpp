//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

int countRev (string s);
int main()
{
    int t; cin >> t;
    while (t--)
    {
        string s; cin >> s;
        cout << countRev (s) << '\n';
    }
}

// Contributed By: Pranay Bansal
// } Driver Code Ends


int countRev (string s)
{
    // your code here
     int open=0;
    int n=s.size();
    if(n%2){return -1;}
    int ans=0;int rem=n-1;
    for(int i=0;i<n;i++){
        if(s[i]=='{'){open++;}
        else{open--;}
        if(open>rem){
            open-=2;
            ans++;
           
        }
        else if(open<0){
            
            open=1;
            ans++;
            
        }
        rem--;
    }
    return ans;
}