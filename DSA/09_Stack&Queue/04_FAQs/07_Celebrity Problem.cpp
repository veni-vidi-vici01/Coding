--------------------------------------------------------Brute--------------------------------------
class Solution {
   public:
    int celebrity(vector<vector<int>> &M) {
        vector<int> v;
        for (int j = 0; j < M[0].size(); j++) {
            int temp = 0;
            for (int i = 0; i < M.size(); i++) {
                if (i != j && M[i][j] != 1 || M[j][i] != 0) {
                    temp = 1;
                }
            }
            if (temp == 0) {
                v.push_back(j);
            }
        }
        if (v.size() == 1) {
            return v[0];
        }
        return -1;
    }
};
---------------------------------------------Optimal-------------------------------------------------
class Solution {
public:
    // Function to find the index of celebrity
    int celebrity(vector<vector<int>> &M){
        
        // Size of given matrix
        int n = M.size();
        
        // Top and Down pointers
        int top = 0, down = n-1;
        
        // Traverse for all the people
        while(top < down) {
            
            /* If top knows down, 
            it can not be a celebrity */
            if(M[top][down] == 1) {
                top = top + 1;
            }
            
            /* If down knowns top, 
            it can not be a celebrity */
            else if(M[down][top] == 1) {
                down = down - 1;
            }
            
            /* If both does not know each other, 
            both cannot be the celebrity */
            else {
                top++;
                down--;
            }
        }
        
        // Return -1 if no celebrity is found
        if(top > down) return -1;
        
        /* Check if the person pointed 
        by top is celebrity */
        for(int i=0; i < n; i++) {
            if(i == top) continue;
            
            // Check if it is not a celebrity
            if(M[top][i] == 1 || M[i][top] == 0) {
                return -1;
            }
        }
        
        // Return the index of celebrity
        return top;
    }
};