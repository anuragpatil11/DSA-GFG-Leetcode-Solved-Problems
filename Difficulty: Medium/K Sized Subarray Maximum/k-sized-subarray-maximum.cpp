//{ Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template for C++

class Solution
{
  public:
    //Function to find maximum of each subarray of size k.
    vector <int> max_of_subarrays(int *arr, int n, int k)
    {
        // your code here
         int maxi=0;
        vector <int> v;
        for(int i=0;i<k;i++)
        {
            maxi=max(maxi,arr[i]);
        }
        v.push_back(maxi);
        for(int i=k;i<n;i++)
        {
            if(arr[i]<maxi and maxi==arr[i-k])
            {
                maxi=arr[i-k+1];
                for(int j=i-k+2;j<=i;j++)
                {
                    if(arr[j]!=maxi)
                    maxi=max(maxi,arr[j]);
                }
            }
            else
            {
                maxi=max(maxi,arr[i]);
            }
            v.push_back(maxi);
        }
        return v;
    }
};

//{ Driver Code Starts.

int main() {
	
	int t;
	cin >> t;
	
	while(t--){
	    
	    int n, k;
	    cin >> n >> k;
	    
	    int arr[n];
	    for(int i = 0;i<n;i++) 
	        cin >> arr[i];
	    Solution ob;
	    vector <int> res = ob.max_of_subarrays(arr, n, k);
	    for (int i = 0; i < res.size (); i++) 
	        cout << res[i] << " ";
	    cout << endl;
	    
	}
	
	return 0;
}
// } Driver Code Ends