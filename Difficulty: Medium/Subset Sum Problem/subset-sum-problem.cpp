//{ Driver Code Starts
//Initial template for C++

#include<bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends
//User function template for C++

class Solution{   
public:
    bool isSubsetSum(vector<int>arr, int sum){
        // code here 
             int n=arr.size();
         vector<bool> don(sum+1,false);
         don[0]=true;
          for (int i = 0; i < n; ++i) {
            for (int j =sum; j >= arr[i];j--) {
                if (don[j - arr[i]]) {
                    don[j] = true;
                }
            }
        }
        
         return don[sum];


    }
};

//{ Driver Code Starts.
int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        int N, sum;
        cin >> N;
        vector<int> arr(N);
        for(int i = 0; i < N; i++){
            cin >> arr[i];
        }
        cin >> sum;
        
        Solution ob;
        cout << ob.isSubsetSum(arr, sum) << endl;
    }
    return 0; 
} 

// } Driver Code Ends