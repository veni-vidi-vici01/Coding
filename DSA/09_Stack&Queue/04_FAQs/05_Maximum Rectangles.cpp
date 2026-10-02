--------------------------------------------------------Optimal 1-----------------------------------------
class Solution {
private:
    int largestRectangleArea(vector<int> &heights) {
        int n = heights.size();
        stack<int> st;
        int maxArea = 0;
 
        for (int i = 0; i < n; i++) {
            while (!st.empty() && heights[st.top()] >= heights[i]) {
                int h = heights[st.top()];
                st.pop();                                                  
                int left = st.empty() ? -1 : st.top();
                int width = i - left - 1;
                maxArea = max(maxArea, h * width);
            }
            st.push(i);
        }
 
        while (!st.empty()) {
            int h = heights[st.top()];
            st.pop();
            int left = st.empty() ? -1 : st.top();
            int width = n - left - 1;
            maxArea = max(maxArea, h * width);
        }
 
        return maxArea;
    }
public:
    int maximalAreaOfSubMatrixOfAll1(vector<vector<int>> &matrix) {
        int n = matrix.size();
        int m = matrix[0].size();
 
        vector<int> heights(m, 0);
        int maxArea = 0;                                     
 
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                if (matrix[i][j] == 0)
                    heights[j] = 0;
                else
                    heights[j]++;                                   //The histogram problem needs heights array so converting rows with the heights.
            }
 
            maxArea = max(maxArea, largestRectangleArea(heights));    
        }
 
        return maxArea;
    }
};
--------------------------------------------------------Optimal 2---------------------------------------
                                                         Using DP.