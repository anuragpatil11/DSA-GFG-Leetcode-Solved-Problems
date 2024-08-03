//{ Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function template for C++

class Solution {
  public:
    vector<int> filterByDigits(const vector<int>& arr) {
        // code here
        vector<int> ans;
        int i=0;
        int n=arr.size();
      
        while(i<n){
              bool flag=1;
            int num=arr[i];
            
            while(num>0){
                int digit=num%10;
                if(digit > 3 || digit < 1){
                    flag=0;
                    break;
                }
                else{
                    num=num/10;
                }
            }
            if(flag){
                  ans.push_back(arr[i]);
            }
            i++;
            
        }
      
        return ans;
    }
};


//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    cin.ignore(); // Ignore the newline character after t
    while (t--) {
        vector<int> arr;
        string input;

        getline(cin, input); // Read the entire line for the array elements
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }

        Solution ob;
        vector<int> result = ob.filterByDigits(arr);
        for (int x : result) {
            cout << x << " ";
        }
        cout << "\n";
    }
    return 0;
}

// } Driver Code Ends