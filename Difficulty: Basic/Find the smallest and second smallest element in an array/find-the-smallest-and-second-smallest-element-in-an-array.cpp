//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

vector<int> minAnd2ndMin(int a[], int n);

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int a[n];

        for (int i = 0; i < n; i++) 
            cin >> a[i];

        vector<int> ans = minAnd2ndMin(a, n);
        if (ans[0] == -1)
            cout << -1 << endl;
        else 
            cout << ans[0] << " " << ans[1] << endl;
    }
    return 0;
}
// } Driver Code Ends


vector<int> minAnd2ndMin(int arr[], int n) {
    sort(arr,arr+n);
    if(arr[0]==arr[n-1])
    return {-1};
   int min1=INT_MAX;
   for(int i=0;i<n;i++){
       if(arr[i]<min1)
       min1=arr[i];
   }
   int min2=INT_MAX;
   for(int i=0;i<n;i++){
       if(arr[i]<min2 && arr[i]>min1)
       min2=arr[i];
   }
   if(min1==min2)
  return {-1};
  else
  return {min1,min2};


    
}