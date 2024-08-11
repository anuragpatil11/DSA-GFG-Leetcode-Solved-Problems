class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
       for (auto n : nums2) {
            nums1.push_back(n);
        }
        sort(nums1.begin(), nums1.end());
        int size1 = nums1.size();
        int t = size1;
        if (t % 2 == 0) {
            return float(float(nums1[(t/2)-1]+nums1[t/2])/2);
        } 
       
        else { t=t/2;
        float ans=float(nums1[t]);
            return ans;           
            
        }
    }
};