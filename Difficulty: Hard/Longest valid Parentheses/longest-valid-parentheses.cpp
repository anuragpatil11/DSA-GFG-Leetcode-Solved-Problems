//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution{
public:
    int maxLength(string S){
        // code here
          stack<char>st;
        //from left to right we mark
        string s=S;
        int n=s.size();
        vector<int>flag(n,0);
        for(int i=0;i<n;i++){
            if(s[i]=='(')st.push(s[i]);
            else{
                if(st.empty()==1)flag[i]=-1;
                else{
                    st.pop();
                }
            }
        }
        while(st.empty()!=1)st.pop();
        //let's put flags from last
        for(int i=n-1;i>=0;i--){
            if(s[i]==')')st.push(s[i]);
            else{
                if(st.empty()==1)flag[i]=-1;
                else{
                    st.pop();
                }
            }
        }
        //now we get the answer
        int maxi=0;
        bool state=0;
        //
        for(int i=0;i<n;i++){
            if(flag[i]==-1){
                // cout<<"HERE";
               continue; 
            }
            else{
                unordered_map<int,int>mp;
                mp[0]=i-1;
                int curr=0;
                while(flag[i]==0&&i<n){
                    if(s[i]=='(')curr++;
                    else curr--;
                    // cout<<" i="<<i<<" curr="<<curr<<" ";
                    if(mp.find(curr)!=mp.end()){
                        maxi=max(maxi,i-mp[curr]);
                    }
                    else{
                        mp[curr]=i;
                    }
                    i++;
                }
                i--;
            }
        }
        return maxi;
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        string S;
        cin>>S;
        
        Solution ob;
        cout<<ob.maxLength(S)<<"\n";
    }
    return 0;
}
// } Driver Code Ends