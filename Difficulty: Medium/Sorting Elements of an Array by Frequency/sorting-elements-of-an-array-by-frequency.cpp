//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    // Complete this function
    // Function to sort the array according to frequency of elements.
    static bool cmp(pair<int,int> &a,pair<int,int>&b){
        if(a.second==b.second) return a.first<b.first;
        else{
            return a.second>b.second;
        }
    }
    
    vector<int> sortByFreq(vector<int>& arr) {
        // Your code here
        vector<int> ans;
        unordered_map<int,int>mp;
        for(int i=0;i<arr.size();i++){
            mp[arr[i]]++;
        }
        
        vector<pair<int,int>>v;
        for(auto i:mp){
            v.push_back({i.first,i.second});
        }
        
        sort(v.begin(),v.end(),cmp);
        
        for(auto i:v){
            for(int j=0;j<i.second;j++){
                ans.push_back(i.first);
            }
        }
        return ans;
    }
};

//{ Driver Code Starts.

int main() {

    int t;
    cin >> t;
    cin.ignore();
    while (t--) {

        string input;
        int num;
        vector<int> arr;

        getline(cin, input);
        stringstream s2(input);
        while (s2 >> num) {
            arr.push_back(num);
        }
        Solution obj;
        vector<int> v;
        v = obj.sortByFreq(arr);
        for (int i : v)
            cout << i << " ";
        cout << endl;
    }

    return 0;
}

// } Driver Code Ends