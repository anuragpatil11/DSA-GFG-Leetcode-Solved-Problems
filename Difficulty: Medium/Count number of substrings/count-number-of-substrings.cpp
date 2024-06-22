//{ Driver Code Starts
//Initial template for C++

#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template for C++

class Solution
{
  public:
     long long int solve(string s,int k)
    {
        
        long long int ans=0;
        
        vector<int>v(26,0);
        
        int i=0;
        int j=0;
        int count=0;
        while(j<s.size())
        {
            v[s[j]-'a']++;
            
            if(v[s[j]-'a']==1)count++;
           
            while(count>k)
            {
                v[s[i]-'a']--;
                if(v[s[i]-'a']==0)
                {
                    count--;
                }
                i++;
            }
            
            ans+=(j-i+1);
            j++;
        }
        return ans;
        
        
        
    }
  
  
  
    long long int substrCount (string s, int k) {
        //code here.
        
        return (solve(s,k)-solve(s,k-1));
        
        
    }
};

//{ Driver Code Starts.


int main()
{
    int t; cin >> t;
    while (t--)
	{
		string s; cin >> s;
		int k; cin >> k;
		Solution ob;
		cout <<ob.substrCount (s, k) << endl;
	}
}
// } Driver Code Ends