//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;


// } Driver Code Ends
// User function template for C++
class Solution {
  public:
    vector<int> findSubarray(int n, int a[]) {
        // code here
         int start=0;
        int s=0,e=0;
        int sum=0;
        int mxlen=INT_MIN;
        int mxsum=INT_MIN;
        for(int i=0;i<n;i++)
        {
            if(a[i]>=0)
            {
                sum += a[i];
                if(sum>mxsum)
                {
                    e=i;
                    start=s;
                    mxsum=sum;
                    mxlen=max(mxlen,e-s+1);
                }
                else if(sum==mxsum)
                {
                    if((i-s+1)>mxlen)
                    {
                        e=i;
                        start=s;
                        mxsum=sum;
                        mxlen=max(mxlen,e-s+1);
                    }
                }
            }
            else{
                s=i+1;
                sum=0;
            }
        }
        
        vector<int>ans;
        for(int i=start;i<=e;i++)
        {
            ans.push_back(a[i]);
        }
        if(ans.size()==0)
        return {-1};
        else
        return ans;
    }
};

//{ Driver Code Starts.

void printAns(vector<int> &ans) {
    for (auto &x : ans) {
        cout << x << " ";
    }
    cout << "\n";
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, i;
        cin >> n;
        int a[n];
        for (i = 0; i < n; i++) {
            cin >> a[i];
        }
        Solution ob;
        auto ans = ob.findSubarray(n, a);
        printAns(ans);
    }
    return 0;
}

// } Driver Code Ends