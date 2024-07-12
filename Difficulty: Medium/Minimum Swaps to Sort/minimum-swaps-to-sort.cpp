//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends


class Solution 
{
    public:
    //Function to find the minimum number of swaps required to sort the array. 
	int minSwaps(vector<int>&nums)
	{
	    // Code here
	      vector<int>ans(nums.begin(),nums.end());
       sort(ans.begin(), ans.end());
       
       unordered_map<int, int>mp;
       for(int i=0;i<ans.size();i++)
       {
           mp[ans[i]]=i;
       }
       
       int cnt=0;
       for(int i=0;i<nums.size();i++)
       {
           if(mp[nums[i]]!=i)
           {
               swap(nums[i], nums[mp[nums[i]]]);
               cnt++;
               --i;//Important because we  want to check the number which came at the current position after swap
           }
       }
       
       return cnt;

	}
};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int n;
		cin >> n;
		vector<int>nums(n);
		for(int i = 0; i < n; i++)
			cin >> nums[i];
		Solution obj;
		int ans = obj.minSwaps(nums);
		cout << ans <<"\n";
	}
	return 0;
}
// } Driver Code Ends