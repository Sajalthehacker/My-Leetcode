class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int nRow = matrix.size();
        int nCol = matrix[0].size();

        int pRow = -1;

        for(int i = 0; i < nRow - 1; i++){
            if(matrix[i][0] <= target && matrix[i+1][0] > target){
                pRow = i;
                break;
            }
        }
        if(pRow == -1){
            pRow = nRow - 1;
        }
        for(int i = 0; i < nCol; i++){
            if(matrix[pRow][i] == target){
                return true;
            }
        }
        return false;
    }
};
