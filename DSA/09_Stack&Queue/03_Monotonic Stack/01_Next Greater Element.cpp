-------------------------------------------Brute----------------------------------------
class Solution {
   public:
    vector<int> nextLargerElement(vector<int> arr) {
        vector<int> v;
        for (int i = 0; i < arr.size(); i++) {
            int n = v.size();
            for (int j = i + 1; j < arr.size(); j++) {
                if (arr[j] > arr[i]) {
                    v.push_back(arr[j]);
                    break;
                }
            }
            if (v.size() == n) {
                v.push_back(-1);
            }
        }
        return v;
    }
};
--------------------------------------Optimal-----------------------------------
class Solution {
public:
 
    /* Function to find the next greater 
    element for each element in the array */
    vector<int> nextLargerElement(vector<int> arr) {
        
        int n = arr.size(); //size of array
        
        // To store the next greater elements
        vector<int> ans(n);
        
        // Stack to get elements in LIFO fashion
        stack<int> st;
        
        // Start traversing from the back
        for(int i=n-1; i >= 0; i--) {
            
            // Get the current element
            int currEle = arr[i];
            
            /* Pop the elements in the stack until 
            the stack is not empty and the top 
            element is not the greater element */
            while(!st.empty() && st.top() <= currEle) {
                st.pop();
            }
            
            /* If the greater element is not 
            found, stack will be empty */
            if(st.empty()) 
                ans[i] = -1;
                
            // Else store the answer
            else 
                ans[i] = st.top();
            
            /* Push the current element in the stack 
            maintaining the decreasing order */
            st.push(currEle);
        }
        
        // Return the result
        return ans;
    }
};
----------------------------------------Leetcode 496. Next Greater Element I-------------------
--------------------------------------------Optimal---------------------------------
class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        int n = nums2.size();
        unordered_map<int, int> mp;
        stack<int> st;

        for (int i = n - 1; i >= 0; i--) {
            int currEle = nums2[i];

            while (!st.empty() && st.top() <= currEle) {
                st.pop();
            }

            if (st.empty())
                mp[currEle] = -1;
            else
                mp[currEle] = st.top();

            st.push(currEle);
        }

        vector<int> ans;
        for (int x : nums1) {
            ans.push_back(mp[x]);
        }

        return ans;
    }
};