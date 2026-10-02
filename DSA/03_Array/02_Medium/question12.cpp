-------------------------------------------Better--------------------------------------------
class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        vector<vector<int>> v(matrix.size(), vector<int>(matrix.size()));
        for(int i=0;i<matrix.size();i++){
            for(int j=0;j<matrix.size();j++){
                v[i][j]=matrix[i][j];
            }
        }
        for(int j=0;j<v.size();j++){
            for(int i=0;i<v.size();i++){
                 matrix[i][j]=v[v.size()-1-j][i];
            }
        }
        
    }
};
--------------------------------------optimal-----------------------------------------------
class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        int n = matrix.size();

        for (int i = 0; i < n / 2; i++) {
            for (int j = i; j < n - i - 1; j++) {

                int temp = matrix[i][j];

                matrix[i][j] = matrix[n - j - 1][i];
                matrix[n - j - 1][i] =
                    matrix[n - i - 1][n - j - 1];
                matrix[n - i - 1][n - j - 1] =
                    matrix[j][n - i - 1];
                matrix[j][n - i - 1] = temp;
            }
        }
    }
};
--------------------------Striver Optimal--------------------------------------------------
class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        int n = matrix.size();
        
        // Step 1: Transpose the matrix
        for (int i = 0; i < n - 1; i++) {
            for (int j = i + 1; j < n; j++) {
                swap(matrix[i][j], matrix[j][i]);
            }
        }
        
        // Step 2: Reverse each row of the matrix
        for (int i = 0; i < n; i++) {
            reverse(matrix[i].begin(), matrix[i].end());
        }
    }
};