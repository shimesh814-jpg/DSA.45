class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        int n = matrix.size();

        for (int i = 0; i < n; i++)
         {
           for (int j = i + 1; j < n; j++) 
           {  // j starts at i+1 to avoid double swap
              swap(matrix[i][j], matrix[j][i]);
           }
        }
        for (int i = 0; i < n; i++)
         {
           reverse(matrix[i].begin(), matrix[i].end());
        }
    }
};