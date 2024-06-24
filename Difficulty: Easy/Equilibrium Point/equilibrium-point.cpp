//{ Driver Code Starts
#include <iostream>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    // Function to find equilibrium point in the array.
    // arr: input array
    // n: size of array
    int equilibriumPoint(long long arr[], int n) {

        // Your code here 
        long left{0}, right{0};
        
        int l{0}, r = n-1;
        
        while(l<r)
        {
            if(left<right)
                left+=arr[l++];
            else
                right+=arr[r--];
        }
        
        return left==right?l+1:-1;
        
    }
};

//{ Driver Code Starts.

int main() {

    long long t;

    // taking testcases
    cin >> t;

    while (t--) {
        long long n;

        // taking input n
        cin >> n;
        long long a[n];

        // adding elements to the array
        for (long long i = 0; i < n; i++) {
            cin >> a[i];
        }

        Solution ob;

        // calling equilibriumPoint() function
        cout << ob.equilibriumPoint(a, n) << endl;
    }
    return 0;
}

// } Driver Code Ends