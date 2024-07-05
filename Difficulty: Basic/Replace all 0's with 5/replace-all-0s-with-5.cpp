//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

int convertFive(int n);

// Driver program to test above function
int main() {
    int T;
    cin >> T;
    while (T--) {
        int n;
        cin >> n;
        cout << convertFive(n) << endl;
    }
}
// } Driver Code Ends


/*you are required to complete this method*/
int convertFive(int n) {
    
    int count=5;
    int t=n;
    while(t!=0){
        int digit=t%10;
        if(digit==0){
            n=n+count;
        }
        count=count*10;
        t=t/10;
    }
    return n;
}