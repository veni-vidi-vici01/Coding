------------------------------------------------Brute---------------------------------
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int data;
 *     TreeNode *left;
 *     TreeNode *right;
 *      TreeNode(int val) : data(val) , left(nullptr) , right(nullptr) {}
 * };
 **/

class Solution {
   public:
    int maxDepth(TreeNode* root) {
        vector<vector<int>> v;
        v = levelOrder(root);
        return v.size();
    }
    vector<vector<int>> levelOrder(TreeNode* root) {
        vector<vector<int>> ans;
        if (root == nullptr) {
            return ans;
        }
        queue<TreeNode*> q;
        q.push(root);

        while (!q.empty()) {
            int size = q.size();
            vector<int> level;

            for (int i = 0; i < size; i++) {
                TreeNode* node = q.front();
                q.pop();
                level.push_back(node->data);
                if (node->left != nullptr) {
                    q.push(node->left);
                }
                if (node->right != nullptr) {
                    q.push(node->right);
                }
            }
            ans.push_back(level);
        }
        return ans;
    }
};
-------------------------------------------------Recursive optimal---------------------------
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int data;
 *     TreeNode *left;
 *     TreeNode *right;
 *      TreeNode(int val) : data(val) , left(nullptr) , right(nullptr) {}
 * };
 **/

class Solution {
   public:
    int maxDepth(TreeNode* root) {
        int count = 0;
        if (root == nullptr) {
            return count;
        }
        int a = maxDepth(root->left);
        int b = maxDepth(root->right);
        return max(a, b)+1;
    }
};
------------------------------------------------Iterative Optimal-----------------------------------
Understand the how to use and when to use and where to use(after solving these also update the iterative way in the leetcode)