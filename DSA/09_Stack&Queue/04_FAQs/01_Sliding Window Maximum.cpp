----------------------------------------------------Brute----------------------------------
class Solution{
public:
    vector<int> maxSlidingWindow(vector<int> &arr, int k) {
        vector<int> v;
        for(int i=0;i<arr.size()-k+1;i++){
            stack<int> st;
            st.push(arr[i]);
            for(int j=i+1;j<k+i;j++){
               if(arr[j]>st.top()){
                st.push(arr[j]);
               }
            }
            v.push_back(st.top());
        }
        return v;
    }
};
----------------------------------------------------Optimal---------------------------------
class Solution {
public:
    // Function to get the maximum sliding window
    vector<int> maxSlidingWindow(vector<int> &arr, int k) {
        
        int n = arr.size(); // Size of array
        
        // To store the answer
        vector<int> ans;
        
        // Deque data structure
        deque <int> dq;
        
        // Traverse the 
        for(int i=0; i < n; i++) {
            
            // Update deque to maintain current window
            if (!dq.empty() && dq.front() <= (i-k)) {
                dq.pop_front();
            }
            
            /* Maintain the monotonic (decreasing) 
            order of elements in deque */
            while (!dq.empty() && arr[dq.back()] <= arr[i]) {
                dq.pop_back();
            }
            
            // Add current elements index to the deque
            dq.push_back(i);
            
            /* Store the maximum element from 
            the first window possible */
            if (i >= (k-1)) {
                ans.push_back(arr[dq.front()]);
            }
        }
        
        // Return the stored result
        return ans;
    }
};
 