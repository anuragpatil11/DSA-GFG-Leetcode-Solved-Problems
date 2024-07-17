//{ Driver Code Starts
#include <iostream>
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution{
    public:
    int findClosest( int n, int k,int arr[]) 
    { 
        // Complete the function
         int diff = INT_MAX; 
      int min_diff = INT_MAX;
      int ans = 0;
      for(int i=0;i<n;i++){
          diff = abs(k-arr[i]);
          if(diff<=min_diff && arr[i]>ans){
              min_diff = diff;
              ans = arr[i];
              
          }
          
      }
      return ans;
    } 
};

//{ Driver Code Starts.
int main()
{

    int t;
    cin>>t;
    while(t--)
    {
        int n,k;
        cin>>n>>k;
        int arr[n];
        for (int i=0; i<n; i++)
        {
            cin>>arr[i];
        }
        Solution ob;
        cout<<ob.findClosest(n,k,arr)<<endl;
    }
}

// } Driver Code Ends