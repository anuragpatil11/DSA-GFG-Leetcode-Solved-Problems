//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution
{
    public:
    pair<long,long> indexes(vector<long long> v, long long x)
    {
        // code here
         long long first=-1;
        long long last=-1;
        int i=0;
        int j=v.size()-1;
        while(i<=j){
            if(v[i]==x && first==-1){
                first=i;
            }
            if(v[j]==x && last==-1){
                last=j;
            }
            if(first!=-1 && last!=-1){
                return {first,last};
            }
            if(first==-1){
                i++;
            }
            if(last==-1){
                j--;
            }
            
        }
        return {first,last};
    }
};

//{ Driver Code Starts.

int main()
 {
    long long t;
    cin>>t;
    while(t--)
    {
        long long n, k;
        vector<long long>v;
        cin>>n;
        for(long long i=0;i<n;i++)
        {
            cin>>k;
            v.push_back(k);
        }
        long long x;
        cin>>x;
        Solution obj;
        pair<long,long> pair = obj.indexes(v, x);
        
        if(pair.first==pair.second and pair.first==-1)
        cout<< -1 <<endl;
        else
        cout<<pair.first<<" "<<pair.second<<endl;

    }
	return 0;
}

// } Driver Code Ends