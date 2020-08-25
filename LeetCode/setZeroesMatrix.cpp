class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int rows = matrix.size();
        int cols = matrix[0].size();
        
        vector<bool> rowZeroes(rows);
        vector<bool> colZeroes(cols);
        
        for(int i = 0 ; i < rows; i++) {
            for(int j = 0 ; j < cols; j++) {
                if(matrix[i][j] == 0) {
                    rowZeroes[i] = true;
                    colZeroes[j] = true;
                }
            }
        }
        
        for(int i = 0 ; i < rows; i++) {
            for(int j = 0; j < cols; j++) {
                if(rowZeroes[i] == true || colZeroes[j] == true) {
                    matrix[i][j] = 0;
                }
            }
        }
        
    }
};