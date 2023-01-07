class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        int rows= matrix.size()-1;
        int cols= matrix[0].size()-1;
        int col= matrix[0].size()-1;
        for(int i=0; i<=rows; i++)
        {
            for(int j=0; j<=cols; j++)
            {
                swap(matrix[i][j],matrix[rows-j][col-i]);
            }
            cols--;
        }
        for(int i=0; i<=(rows/2); i++)
        {
            for(int j=0; j<=col; j++)
            {
                swap(matrix[i][j],matrix[rows-i][j]);
            }
        }
    }
};
