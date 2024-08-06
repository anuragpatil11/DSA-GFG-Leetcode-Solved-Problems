class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        vector <int> ans;
        
        int row=matrix.size();
        int col=matrix[0].size();
        int startRow=0;
        int endRow=row-1;
        int startCol=0;
        int endCol=col-1;
        
        int total=row*col;
        int cnt=0;
        
        while(cnt<total){
            // print starting row
            for(int idx=startCol;cnt<total && idx<=endCol;idx++){
                ans.push_back(matrix[startRow][idx]);
                cnt++;
            }
            startRow++;
            
            // print ending col
            for(int idx=startRow;cnt<total && idx<=endRow;idx++){
                ans.push_back(matrix[idx][endCol]);
                cnt++;
            }
            endCol--;
            
            // print ending row
            for(int idx=endCol;cnt<total && idx>=startCol;idx--){
                ans.push_back(matrix[endRow][idx]);
                cnt++;
            }
            endRow--;
            
            //print starting col
            for(int idx=endRow;cnt<total && idx>=startRow;idx--){
                ans.push_back(matrix[idx][startCol]);
                cnt++;
            }
            startCol++;
        }
        return ans;
    }
};