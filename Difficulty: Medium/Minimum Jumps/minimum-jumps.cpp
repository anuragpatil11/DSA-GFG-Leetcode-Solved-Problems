//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// Function to return minimum number of jumps to end of array

class Solution{
  public:
    int minJumps(int arr[], int n){
        // Your code here
        int i=0;
        int count=0;
        if(n==1){
            return 0;
        }
        if (arr[0] == 0) 
        return -1;
        while(i<n){
            int jump=arr[i];
            int j=i+1;
            int dest=min(n-1,jump+i);
            if(dest==n-1)
                return count+1;
            int maxjump=INT_MIN;
            int newdest=i+jump;
            while(j<=newdest){
                if(maxjump<=arr[j]+j){
                    maxjump=arr[j]+j;
                    i=j;
                    // cout<<i;
                }
                j++;
            }
            if(maxjump<=0){
                return -1;
            }
            count++;
        }
        return -1;
    }
};


//{ Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,i,j;
        cin>>n;
        int arr[n];
        for(int i=0; i<n; i++)
            cin>>arr[i];
        Solution obj;
        cout<<obj.minJumps(arr, n)<<endl;
    }
    return 0;
}

// } Driver Code Ends