----------------------------------------------Better---------------------------------------
class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        vector<int> v;
        if (matrix.empty()) return v;
    
        Function(matrix, 0, matrix.size() - 1, 0, matrix[0].size() - 1, v);
        return v;
    }

    void Function(vector<vector<int>>& matrix, int top, int bottom, int left, int right, vector<int>& v) {
        
        if (top > bottom || left > right) {
            return;
        }

        for (int j = left; j <= right; j++) {
            v.push_back(matrix[top][j]);
        }
        top++;

        for (int i = top; i <= bottom; i++) {
            v.push_back(matrix[i][right]);
        }
        right--;

        if (top <= bottom) {
            for (int j = right; j >= left; j--) {
                v.push_back(matrix[bottom][j]);
            }
            bottom--;
        }

        if (left <= right) {
            for (int i = bottom; i >= top; i--) {
                v.push_back(matrix[i][left]);
            }
            left++;
        }
        Function(matrix, top, bottom, left, right, v);
    }
};
--------------------------------------Optimal----------------------------------------------------------
class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int m = matrix.size();
        int n = matrix[0].size();

        vector<int> spiral;

        int top = 0;
        int bottom = m-1;
        int left = 0;
        int right = n-1;

        while( top <= bottom && left <= right ){

            //left to right
            for(int i=left; i<=right; i++){
                spiral.push_back( matrix[top][i] );
            }
            top++;

            //top to bottom
            for(int i=top; i<=bottom; i++){
                spiral.push_back( matrix[i][right] );
            }
            right--;

            //right to left
            if( top <= bottom ){
                for(int i=right; i>=left; i--){
                    spiral.push_back( matrix[bottom][i] );
                } 
                bottom--;
            }

            //bottom to top
            if( left <= right ){
                for(int i=bottom; i>=top; i--){
                    spiral.push_back( matrix[i][left] );
                }
                left++;
            }
        }
        return spiral;
    }
};