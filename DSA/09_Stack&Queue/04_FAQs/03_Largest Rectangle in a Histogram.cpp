---------------------------------------------------------------Brute-------------------------------
class Solution {
   public:
    int largestRectangleArea(vector<int> &heights) {
        int largest_area = 0;
        for (int i = 0; i < heights.size(); i++) {
            int mini = heights[i];
            int width;
            for (int j = i; j < heights.size(); j++) {
                mini = min(mini, heights[j]);
                width = j - i + 1;
                long long int area = 1LL * mini * width;
                if (area > largest_area) {
                    largest_area = area;
                }
            }
        }
        return largest_area;
    }
};
----------------------------------------------------------Better--------------------------------------
class Solution {
private:
    /* Function to find the indices of 
    next smaller elements */
    vector<int> findNSE(vector<int> &arr) {
        
        // Size of array
        int n = arr.size();
        
        // To store the answer
        vector<int> ans(n);
        
        // Stack 
        stack<int> st;
        
        // Start traversing from the back
        for(int i = n - 1; i >= 0; i--) {
            
            /* Pop the elements in the stack until 
            the stack is not empty and the top 
            element is not the smaller element */
            while(!st.empty() && arr[st.top()] >= arr[i]){
                st.pop();
            }
            
            // Update the answer
            ans[i] = !st.empty() ? st.top() : n;
            
            /* Push the index of current 
            element in the stack */
            st.push(i);
        }
        
        // Return the answer
        return ans;
    }
    
    /* Function to find the indices of 
    previous smaller elements */
    vector<int> findPSE(vector<int> &arr) {
        
        // Size of array
        int n = arr.size();
        
        // To store the answer
        vector<int> ans(n);
        
        // Stack 
        stack<int> st;
        
        // Traverse on the array
        for(int i=0; i < n; i++) {
            
            /* Pop the elements in the stack until 
            the stack is not empty and the top 
            elements is not the smaller element */
            while(!st.empty() && arr[st.top()] >= arr[i]){
                st.pop();
            }
            
            // Update the answer
            ans[i] = !st.empty() ? st.top() : -1;
            
            /* Push the index of current 
            element in the stack */
            st.push(i);
        }
        
        // Return the answer
        return ans;
    }
    
public:
    
    // Function to find the largest rectangle area
    int largestRectangleArea(vector<int> &heights) {
        
        /* Determine the next and 
        previous smaller elements */
        vector<int> nse = findNSE(heights);
        vector<int> pse = findPSE(heights);
        
        // To store largest area
        int largestArea = 0;
        
        // To store current area
        int area;
        
        // Traverse on the array
        for(int i=0; i < heights.size(); i++) {
            
            // Calculate current area
            area = heights[i] * (nse[i] - pse[i] - 1);
            
            // Update largest area
            largestArea = max(largestArea, area);
        }
        
        // Return largest area found
        return largestArea;
    }
};
-----------------------------------------------------Optimal-----------------------------------------------
class Solution {
public:
    
    // Function to find the largest rectangle area
    int largestRectangleArea(vector<int> &heights) {
        
        int n = heights.size(); // Size of array
        
        // Stack 
        stack<int> st;
        
        // To store largest area
        int largestArea = 0;
        
        // To store current area
        int area;
        
        /* To store the indices of next 
        and previous smaller elements */
        int nse, pse;
        
        // Traverse on the array
        for(int i=0; i < n; i++) {
            
            /* Pop the elements in the stack until 
            the stack is not empty and the top 
            elements is not the smaller element */
            while(!st.empty() && 
                  heights[st.top()] >= heights[i]){
                      
                // Get the index of top of stack
                int ind = st.top(); 
                st.pop();
                
                /* Update the index of 
                previous smaller element */
                pse = st.empty() ? -1 : st.top();
                
                /* Next smaller element index for 
                the popped element is current index */
                nse = i;
                
                // Calculate the area of the popped element
                area = heights[ind] * (nse-pse-1);
                
                // Update the maximum area
                largestArea = max(largestArea, area);
            }
            
            // Push the current index in stack
            st.push(i);
        }
        
        // For elements that are not popped from stack
        while(!st.empty()) {
            
            // NSE for such elements is size of array
            nse = n;
            
            // Get the index of top of stack
            int ind = st.top(); 
            st.pop();
            
            // Update the previous smaller element
            pse = st.empty() ? -1 : st.top();
            
            // Calculate the area of the popped element
            area = heights[ind] * (nse-pse-1);
            
            // Update the maximum area
            largestArea = max(largestArea, area);
        }
        
        // Return largest area found
        return largestArea;
    }
};
