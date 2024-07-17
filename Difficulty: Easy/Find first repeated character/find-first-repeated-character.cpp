//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;
string firstRepChar(string s);
int main()
 {
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        cout<<firstRepChar(s)<<endl;
    }
	return 0;
}
// } Driver Code Ends


string firstRepChar(string s)
{
  int n= s.size();
    
    string k="";
    
    map<char,int> mpp;
    
    for(int i=0; i<n; i++){
        mpp[s[i]]++;
        if(mpp[s[i]] == 2){
             k = s[i];
             break;
        }
    }
    if(k==""){
        k=k+"-1";
        return k;
    }
    else{
        return k;
    }
}