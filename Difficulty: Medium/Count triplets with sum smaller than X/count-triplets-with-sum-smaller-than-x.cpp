//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {

  public:
    long long countTriplets(int n, long long sum, long long arr[]) {
        // Your code goes here
         long long cnt=0;
        sort(arr,arr+n);
        for(int i=0;i<n;i++)
        {
            int j=i+1;
            int k=n-1;
            while(j<k)
            {
                long long s=arr[i]+arr[j]+arr[k];
                if(s<sum)
                {   
                    cnt+=(k-j);
                    j++;
                }
                else
                {
                    k--;
                }
            }
        }
        return cnt;
    }
};

//{ Driver Code Starts.

int main() {

    int t;
    cin >> t;
    while (t--) {
        int n;
        long long sum;
        cin >> n >> sum;
        long long arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }

        Solution ob;
        cout << ob.countTriplets(n, sum, arr);

        cout << "\n";
    }
    return 0;
}

// } Driver Code Ends