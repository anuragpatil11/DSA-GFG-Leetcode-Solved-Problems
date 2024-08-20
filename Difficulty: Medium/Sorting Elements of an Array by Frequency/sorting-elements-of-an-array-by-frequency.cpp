//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    // Complete this function
    // Function to sort the array according to frequency of elements.
    vector<int> sortByFreq(vector<int>& a) {
        int n=a.size();
        // 'help' will store pairs of frequency and element value.
        vector<pair<int,int>> help;

        // 'freq' maps each element to its frequency in the array.
        unordered_map<int,int> freq;

        // Counting frequency of each element in the array.
        for(int i = 0; i < n; i++) {
            freq[a[i]]++;
        }

        // Filling the 'help' vector with pairs of (frequency, element).
        for(int i = 0; i < n; i++) {
            help.push_back({freq[a[i]], a[i]});
        }

        // Sorting 'help' based on the frequency first, and then by element value
        // if two elements have the same frequency.
        sort(help.begin(), help.end(), [](pair<int,int> p1, pair<int,int> p2) {
            // If frequencies are equal, sort by element value in ascending order.
            if(p1.first == p2.first) {
                return p1.second < p2.second;
            }
            // Otherwise, sort by frequency in descending order.
            return p1.first > p2.first;
        });

        // Preparing the result vector to return the sorted elements.
        vector<int> res;
        // Adding elements to 'res' based on their order in 'help'.
        for(const auto& x: help) {
            res.push_back(x.second);
        }

        // Returning the sorted array.
        return res;
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