//{ Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function template for C++

class Solution{
  public:
    int countMin(string str){
    //complete the function here
      int n=str.length();
        string cpy=str;
        reverse(cpy.begin(),cpy.end());
        vector<int> prev(n+1,0),curr(n+1,0);
        for(int i=1; i<=n; i++){
            for(int j=1; j<=n; j++){
                if(str[i-1]==cpy[j-1]) 
                curr[j]=1+prev[j-1];
                else 
                curr[j]=max(curr[j-1],prev[j]);
            }
            prev=curr;
        }
        return n - curr[n];
    }
};

//{ Driver Code Starts.
int main(){
    int t;
    cin >> t;
    while(t--){
        string str;
        cin >> str;
        Solution ob;
        cout << ob.countMin(str) << endl;
    }
return 0;
}


// } Driver Code Ends