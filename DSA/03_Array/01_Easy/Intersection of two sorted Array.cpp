---------------------------------------------New Striver(Brute)--------------------------------------
class Solution {
   public:
    vector<int> intersectionArray(vector<int>& nums1, vector<int>& nums2) {
        vector<int> ans;
        vector<int> visited(nums2.size(), 0);

        for (int i = 0; i < nums1.size(); i++) {
            for (int j = 0; j < nums2.size(); j++) {
                if (nums1[i] == nums2[j] && visited[j] == 0) {
                    ans.push_back(nums2[j]);
                    visited[j] = 1;
                    break;
                }
                else if (nums2[j] > nums1[i])
                    break;
            }
        }
        return ans;
    }
};
-----------------------------------------Optimal-------------------------------------
class Solution {
   public:
    // Function to find intersection of two sorted arrays
    vector<int> intersectionArray(vector<int>& nums1, vector<int>& nums2) {
        // Vector to store the intersection elements
        vector<int> ans;
        // Pointers for nums1 and nums2
        int i = 0, j = 0;

        // Traverse both arrays using two pointers approach
        while (i < nums1.size() && j < nums2.size()) {
            if (nums1[i] < nums2[j]) {
                i++;
            } else if (nums2[j] < nums1[i]) {
                j++;
            }
            // nums1[i] == nums2[j]
            else {
                ans.push_back(nums1[i]);
                i++;
                j++;
            }
        }

        // Return intersection
        return ans;
    }
};
--------------------------------------Leetcode:349. Intersection of Two Arrays---------------
-----------------------------------------------------------Better------------------------------
class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        vector<int> ans;
        sort(nums1.begin(),nums1.end());
        sort(nums2.begin(),nums2.end());
        nums1.erase(unique(nums1.begin(),nums1.end()),nums1.end());
        nums2.erase(unique(nums2.begin(),nums2.end()),nums2.end());
        int a =min(nums1.size(),nums2.size());
        int i=0,j=0;
        while (i < nums1.size() && j < nums2.size()) {
            if (nums1[i] < nums2[j]) {
                i++;
            } else if (nums2[j] < nums1[i]) {
                j++;
            }
            // nums1[i] == nums2[j]
            else {
                ans.push_back(nums1[i]);
                i++;
                j++;
            }
        }
        return ans;
    }
};
--------------------------------------------------------Optimal-----------------------------------
class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        vector<int> ans;
        unordered_map<int,int> v;
        for(int i=0;i<nums1.size();i++){
            v[nums1[i]]=1;
        }
        for(int j=0;j<nums2.size();j++){
            if(v[nums2[j]]==1){
                v[nums2[j]]=0;
                ans.push_back(nums2[j]);
            }
        }
        return ans;
    }
};