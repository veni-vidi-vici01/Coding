--------------------------------------------------------Recursive method------------------
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    vector<int> preorderTraversal(TreeNode* root) {
        vector<int> v;
           traverse(root,v);
           return v;
    }
    void traverse(TreeNode* root, vector<int>& v){
            if(root==nullptr){
                return;
            }
            v.push_back(root->val);
            traverse(root->left,v);
            traverse(root->right,v);
            return;
        }
};
-----------------------------------------------------Iterative Method---------------------------
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    vector<int> preorderTraversal(TreeNode* root) {
        TreeNode* node = root;
        stack<TreeNode*> st;
        vector<int> v;
        while (true) {
            if (node != nullptr) {
                v.push_back(
                    node->val);  
                st.push(node);
                node = node->left;
            } else {
                if (st.empty()) {
                    break;
                }
                node = st.top();
                st.pop();
                node = node->right;
            }
        }
        return v;
    }
};