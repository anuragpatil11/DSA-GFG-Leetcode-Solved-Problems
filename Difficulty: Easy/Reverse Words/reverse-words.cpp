//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution
{
    public:
    //Function to reverse words in a given string.
    string reverseWords(string S) 
    { 
        // code here
          string res="";
       
       for(int i=0;i<S.size();i++){
           
           
            string temp="";
            
            int j=i;
            
            for(j=i;j<S.size();j++){
                
                  if(S[j]=='.'){
                      break;
                  }
                  temp+=S[j];
            }
            
            i=j;
            reverse(temp.begin(),temp.end());
            res+=temp;// i.ekil.
            if(i<S.size()-1){
                  res+=".";
            }
           
       }
       
       reverse(res.begin(),res.end());
       return res;
    } 
};

//{ Driver Code Starts.
int main() 
{
    int t;
    cin >> t;
    while (t--) 
    {
        string s;
        cin >> s;
        Solution obj;
        cout<<obj.reverseWords(s)<<endl;
    }
}
// } Driver Code Ends