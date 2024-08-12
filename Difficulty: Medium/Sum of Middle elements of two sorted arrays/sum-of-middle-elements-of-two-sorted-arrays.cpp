//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function template for C++

//Position this line where user code will be pasted.
class Solution {
  public:
    int SumofMiddleElements(vector<int> &arr1, vector<int> &arr2) {
         // Append elements from arr2 to arr1
    for (int j = 0; j < arr2.size(); j++) {
        arr1.push_back(arr2[j]);
    }

    // Sort the combined array
    sort(arr1.begin(), arr1.end());

    int n = arr1.size();
    int mid = n / 2;

    // Calculate the median sum
    int midSum = 0;

    if (n % 2 != 0) {
        // Odd length: take the middle element as the median
        midSum = arr1[mid];
    } else {
        // Even length: take the average of the two middle elements
        midSum = arr1[mid - 1] + arr1[mid];
    }

    return midSum;
    }
};

//{ Driver Code Starts.
//Back-end complete function template in C++

int main() {
    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        vector<int> arr, brr;
        string input1;
        getline(cin, input1);
        stringstream ss1(input1);
        int number1;
        while (ss1 >> number1) {
            arr.push_back(number1);
        }
        string input2;
        getline(cin, input2);
        stringstream ss2(input2);
        int number2;
        while (ss2 >> number2) {
            brr.push_back(number2);
        }
        Solution ob;
        int res = ob.SumofMiddleElements(arr, brr);
        cout << res << endl;
    }
}
// } Driver Code Ends