//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

int multiply(int arr[], int n);


int main() {
	//code
	int t;
	cin>>t;
	while (t--)
	{
	    int n,sum1=0,sum2=0;
	    cin>>n;
	    int a[n];
	    for(int i=0;i<n;i++)
	        cin>>a[i];
	    
	    cout << multiply(a, n) << endl;
	    
	}
	return 0;
}
// } Driver Code Ends


//User function Template for C++

int multiply(int arr[], int n)
{
    // Complete the function
    int sumL=0,sumR=0;
    for(int i=0;i<n/2;i++){
        sumL+=arr[i];
    }
    for(int i=n/2;i<n;i++){
        sumR+=arr[i];
    }
    int mul=sumL*sumR;
    return mul;
    
    
}