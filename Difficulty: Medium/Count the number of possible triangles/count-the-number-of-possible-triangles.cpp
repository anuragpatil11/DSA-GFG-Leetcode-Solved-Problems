//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution
{
    public:
    //Function to count the number of possible triangles.
    int findNumberOfTriangles(int arr[], int n)
    {
        // code here
           sort(arr,arr+n);
        int cnt=0;
        for(int i=0;i<n;i++)
        {
            for(int j=i+1;j<n;j++)
            {
                int temp=arr[i]+arr[j];
                int ind=lower_bound(arr,arr+n,temp)-arr;
                if (ind < n && arr[ind] == temp) { 
                    cnt += ind;
                } else if (ind < n) {
                    cnt += ind;
                } else {
                    cnt += n; 
                }
                cnt-=(j+1);
            }
        }
        return cnt;
    }
};


//{ Driver Code Starts.

int main()
{
    int T;
    cin>>T;
    while(T--)
    {
        int n;
        cin>>n;
        int arr[n];
        for(int i=0; i<n; i++)
            cin>>arr[i];
        Solution ob;
        cout<<ob.findNumberOfTriangles(arr,n) <<endl;
    }
    return 0;
}
// } Driver Code Ends