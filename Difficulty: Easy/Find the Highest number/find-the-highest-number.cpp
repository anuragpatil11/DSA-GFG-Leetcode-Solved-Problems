//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
public:
    int findPeakElement(vector<int>& arr) 
    {
        // Code here.
         int start=0,end=arr.size()-1,mid,n=arr.size();
      
        while(start<=end){
            
            mid=start+(end-start)/2;
            if((mid == 0 || arr[mid] > arr[mid - 1]) && (mid == n - 1 || arr[mid] > arr[mid + 1])) {
                return arr[mid];
            }
            else if (arr[mid]>arr[mid-1]){
                start=mid+1;
            }
            else end=mid-1;
        }
    }
};



//{ Driver Code Starts.
int main(){
    int T;
    cin >> T;
    while(T--)
    {
    	int n;
    	cin >> n;
    	vector<int>a(n);
    	for(int i = 0; i < n; i++)
    		cin>>a[i];
    	Solution ob;
    	int ans = ob.findPeakElement(a);
    	cout << ans << "\n";
    }
	return 0;
}


// } Driver Code Ends