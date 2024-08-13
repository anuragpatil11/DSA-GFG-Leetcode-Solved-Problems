class Solution {
public:
    int maxArea(vector<int>& height) {
        int area=0;
        int n=height.size();
        int i=0;
        int j=n-1;
        while(i<j){
            int minArea=min(height[i],height[j]);
            area=max(minArea*(j-i),area);
            
            if(height[i]<height[j]){
                i++;
                
            }
            else{
                j--;
            }
        }
        return area;
    }
};