//{ Driver Code Starts
#include<bits/stdc++.h> 
using namespace std;

// } Driver Code Ends
class Solution{
public:
    int evenlyDivides(int N){
        //code here
       int num = N;
    int c = 0;

    while (N != 0) {
        int digit = N % 10;
        
        // Check to avoid division by zero
        if (digit != 0 && num % digit == 0) {
            c++;
        }

        N = N / 10;
    }

    return c;
        
    }
};

//{ Driver Code Starts.
int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        int N;
        cin>>N;
        Solution ob;
        cout << ob.evenlyDivides(N) << endl;
    }
    return 0; 
}
// } Driver Code Ends