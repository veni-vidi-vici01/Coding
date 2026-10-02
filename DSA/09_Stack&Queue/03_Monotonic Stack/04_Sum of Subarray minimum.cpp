--------------------------------------------Brute---------------------------------
class Solution {
public:
    int sumSubarrayMins(vector<int> &arr) {
        int sum=0;
       for(int i=0;i<arr.size();i++){
         vector<int> v1;
        for(int j=i;j<arr.size();j++){
          v1.push_back(arr[j]);
          sort(v1.begin(),v1.end());
          sum+=v1[0];
        }
       }
    return sum;
    }
};
----------------------------------------Better--------------------------------------
class Solution {
   public:
    int sumSubarrayMins(vector<int> &arr) {
        int sum = 0;
        for (int i = 0; i < arr.size(); i++) {
            vector<int> v1;
            int min = arr[i];
            for (int j = i; j < arr.size(); j++) {
                v1.push_back(arr[j]);
                if (arr[j] <= min) {
                    min = arr[j];
                }
                sum += min;
            }
        }
        return sum;
    }
};
-------------------------------------Better 2(Min Stack)---------------------------------------
class Solution {
private:
    stack<int> st;
    stack<int> minSt;

    void push(int value) {
        if (minSt.empty() || value <= minSt.top()) {
            minSt.push(value);
        } else {
            minSt.push(minSt.top()); // Keep track of the current minimum
        }
        st.push(value);
    }

    void pop() {
        if (!st.empty()) {
            st.pop();
            minSt.pop();
        }
    }

    int getMin() {
        return minSt.top();
    }

    void clear() {
        while (!st.empty()) st.pop();
        while (!minSt.empty()) minSt.pop();
    }

public:
    int sumSubarrayMins(vector<int>& arr) {
        long long sum = 0;
        int MOD = 1e9 + 7;
        int n = arr.size();

        for (int i = 0; i < n; i++) {
            clear(); 
            for (int j = i; j < n; j++) {
                push(arr[j]);
                sum = (sum + getMin()) % MOD;
            }
        }

        return sum;
    }
};
------------------------------------------------Optimal--------------------------------
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
    previous smaller or equal elements */
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
            elements are greater than the current element */
            while(!st.empty() && arr[st.top()] > arr[i]){
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

    /* Function to find the sum of the 
    minimum value in each subarray */
    int sumSubarrayMins(vector<int> &arr) {
        
        vector<int> nse = 
            findNSE(arr);
        
        vector<int> pse =
            findPSE(arr);
        
        // Size of array
        int n = arr.size();
        
        int mod = 1e9 + 7; // Mod value
        
        // To store the sum
        int sum = 0;
        
        // Traverse on the array
        for(int i=0; i < n; i++) {
            
            // Count of first type of subarrays
            int left = i - pse[i];
            
            // Count of second type of subarrays
            int right = nse[i] - i;
            
            /* Count of subarrays where 
            current element is minimum */
            long long freq = left*right*1LL;
            
            // Contribution due to current element 
            int val = (freq*arr[i]*1LL) % mod;
            
            // Updating the sum
            sum = (sum + val) % mod;
        }
        
        // Return the computed sum
        return sum;
    }
};
