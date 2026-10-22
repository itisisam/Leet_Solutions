class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {

        vector<vector<int>>ans(matrix.size(), vector<int>(matrix[0].size(),0));

        for(int i=0;i<matrix.size();i++)
        {
            for(int j=0;j<matrix[0].size();j++)
            {
                ans[i][j] = matrix[i][j];
            }
        }

        for(int i=0;i<matrix.size();i++)
        {
            for(int j=0;j<matrix[0].size();j++)
            {
                int col = 0;
                int row = 0;

                if(matrix[i][j] == 0)
                {
                    while(col < matrix[i].size())
                    {
                        ans[i][col] = 0;
                        col++;
                    }

                    while(row < matrix.size())
                    {
                        ans[row][j] = 0;
                        row++;
                    }
                }
            }
        }

         for(int i=0;i<matrix.size();i++)
        {
            for(int j=0;j<matrix[0].size();j++)
            {
                matrix[i][j] = ans[i][j];
            }
        }
    }
};