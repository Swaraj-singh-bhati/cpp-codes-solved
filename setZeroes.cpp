class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) 
    {
        vector<pair<int, int>> rec;
        int row = matrix.size();
        int col = matrix[0].size();
        int num1;
        int num2;
        
        for(int i =0; i<row; i++)
        {
            for(int j=0; j<col; j++)
            {
                if(matrix[i][j] == 0)
                {
                    rec.push_back(make_pair(i,j));
                }
            }
        }
        int n = rec.size();
        for(int i =0; i<n; i++)
        {
            num1 = rec[i].first;
            num2 = rec[i].second;
            for(int k =0; k<row; k++)
            {
                matrix[k][num2] = 0;
            }
            for(int l=0; l<col; l++)
            {
                matrix[num1][l] = 0;
            }
        }
           
    }
};
