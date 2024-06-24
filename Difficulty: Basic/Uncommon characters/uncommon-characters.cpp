//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
    public:
        string UncommonChars(string s1, string s2)
        {
            // code here
             set<char> set1(s1.begin(), s1.end()); 
            set<char> set2(s2.begin(), s2.end()); 
         

            string tmp,temp;

   
            for (char c : s1)
            {
                if (set2.find(c) == set2.end()) { 
                    tmp += c;
                }
            }

    
            for (char c : s2)
            {
                if (set1.find(c) == set1.end()) { 
                    tmp += c;
                }
            }
           set<char> set3(tmp.begin(), tmp.end()); 
           for(auto it:set3)
           {
               temp+=it;
           }
           
            return temp.empty() ? "-1" : temp;
        }
};



//{ Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string A,B;
        cin>>A;
        cin>>B;
        Solution ob;
        cout<<ob.UncommonChars(A, B);
        cout<<endl;
    }
    return 0;
}
// } Driver Code Ends