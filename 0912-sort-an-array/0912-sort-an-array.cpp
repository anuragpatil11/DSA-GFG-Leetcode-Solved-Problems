class Solution {
public:
    void merge(vector<int>&nums,int st,int end,int mid){
        vector<int>temp;
        int left = st;
        int right = mid+1;
        while(left<=mid && right<=end){
            if(nums[left]<=nums[right])
                temp.push_back(nums[left++]);
            else
                temp.push_back(nums[right++]);    
        }
        while(left<=mid)
            temp.push_back(nums[left++]);
        while(right<=end)
            temp.push_back(nums[right++]);
        for(int i=st;i<=end;i++)
            nums[i]=temp[i-st];

    }
    void mergeSort(vector<int>&nums,int st,int end){
        if(st>=end) return;
        int mid = st+(end-st)/2;
        mergeSort(nums,st,mid);
        mergeSort(nums,mid+1,end);
        merge(nums,st,end,mid);
    }
    vector<int> sortArray(vector<int>& nums) {
        mergeSort(nums,0,nums.size()-1);
        return nums;
    }
};