------------------------------------------------------------Brute-----------------------------------
class Solution {
   public:
    int trap(vector<int>& height) {
        int n = height.size();
        if (n == 0) return 0;

        vector<int> left_max = previous_largest_element(height);
        vector<int> right_max = next_largest_element(height);

        int sum = 0;
        for (int i = 0; i < n; i++) {
            sum += min(left_max[i], right_max[i]) - height[i];
        }

        return sum;
    }
    vector<int> previous_largest_element(const vector<int>& height) {
        int n = height.size();
        if (n == 0) return {};

        vector<int> left_max(n);
        left_max[0] = height[0];
        for (int i = 1; i < n; i++) {
            left_max[i] = max(left_max[i - 1], height[i]);
        }
        return left_max;
    }

    vector<int> next_largest_element(const vector<int>& height) {
        int n = height.size();
        if (n == 0) return {};

        vector<int> right_max(n);
        right_max[n - 1] = height[n - 1];
        for (int i = n - 2; i >= 0; i--) {
            right_max[i] = max(right_max[i + 1], height[i]);
        }
        return right_max;
    }
};
-------------------------------------------------------Optimal----------------------------------------
class Solution {
public:
 
    // Function to get the trapped water
    int trap(vector<int> &height){
        
        int n = height.size(); // Size of array
    
        // To store the total trapped rainwater
        int total = 0;
        
        // To store the maximums on both sides
        int leftMax = 0, rightMax = 0;
        
        // Left and Right pointers
        int left = 0, right = n-1;
        
        // Traverse from both ends
        while(left < right) {
            
            // If left height is smaller or equal
            if(height[left] <= height[right]) {
                
                // If water can be stored
                if(leftMax > height[left]) {
                    
                    // Update total water
                    total += leftMax - height[left];
                }
                
                // Else update maximum height on left
                else leftMax = height[left];
                
                // Shift left by 1
                left = left + 1;
            }
            
            // Else if right height is smaller
            else {
                
                // If water can be stored
                if(rightMax > height[right]) {
                    
                    // Update total water
                    total += rightMax - height[right];
                }
                
                // Else update maximum height on right
                else rightMax = height[right];
                
                // Shift right by 1
                right = right - 1;
            }
        }
        
        // Return the result
        return total;
    }
};
 

