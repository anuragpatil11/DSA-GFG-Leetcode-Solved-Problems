//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;


// } Driver Code Ends
//User function template for C++
class Solution{
public:	
	// calculate the maximum sum with out adjacent
	int findMaxSum(int *arr, int n) {
	    // code here
	     int prevMax = 0; // Maximum sum excluding the current element
    int currMax = arr[0]; // Maximum sum including the current element
 
    for (int i = 1; i < n; i++) {
        int temp = currMax; // Store the current maximum sum
        currMax = max(prevMax + arr[i], currMax); // Update current maximum sum
        prevMax = temp; // Update previous maximum sum
    }
 
    return currMax; // Return the final maximum sum
	}
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        auto ans = ob.findMaxSum(arr, n);
        cout << ans << "\n";
    }
    return 0;
}
// } Driver Code Ends