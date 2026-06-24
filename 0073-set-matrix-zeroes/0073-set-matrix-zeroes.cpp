class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {

        int n = matrix.size();      // rows
        int m = matrix[0].size();   // cols

        bool firstRowImpacted = false;
        bool firstColImpacted = false;

        // Check first row
        for(int col = 0; col < m; col++)
        {
            if(matrix[0][col] == 0)
            {
                firstRowImpacted = true;
                break;
            }
        }

        // Check first column
        for(int row = 0; row < n; row++)
        {
            if(matrix[row][0] == 0)
            {
                firstColImpacted = true;
                break;
            }
        }

        // Set markers
        for(int i = 1; i < n; i++)
        {
            for(int j = 1; j < m; j++)
            {
                if(matrix[i][j] == 0)
                {
                    matrix[i][0] = 0;
                    matrix[0][j] = 0;
                }
            }
        }

        // Fill zeros using markers
        for(int i = 1; i < n; i++)
        {
            for(int j = 1; j < m; j++)
            {
                if(matrix[i][0] == 0 || matrix[0][j] == 0)
                {
                    matrix[i][j] = 0;
                }
            }
        }

        // First row
        if(firstRowImpacted)
        {
            for(int j = 0; j < m; j++)
            {
                matrix[0][j] = 0;
            }
        }

        // First column
        if(firstColImpacted)
        {
            for(int i = 0; i < n; i++)
            {
                matrix[i][0] = 0;
            }
        }
    }
};