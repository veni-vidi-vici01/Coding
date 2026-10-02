----------------------------------------------------Recursive Method-------------------
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
    vector<int> postorderTraversal(TreeNode* root) {
        vector<int> v;
            traversal(root,v);
            return v;
    }
    void traversal(TreeNode* root, vector<int>& v){
            if(root==nullptr){
                return;
            }
            traversal(root->left,v);
            traversal(root->right,v);
            v.push_back(root->val);
            return ;
        }
};
-----------------------------------------------Iterative Method-------------------------------
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
    vector<int> postorderTraversal(TreeNode* root) {
        if (root == nullptr) return {};
        vector<int> result; // to store the result

        stack <TreeNode*> nodeStack; // stack to process the nodes
        nodeStack.push(root); // push the root initially
        
        // Until the stack is empty 
        while(!nodeStack.empty()) {
            TreeNode* node = nodeStack.top(); // get the top node 
            nodeStack.pop(); // pop it from the stack 

            result.push_back(node->val); // add it to the list
            
            // Add its left child if it exists
            if(node-> left) nodeStack.push(node-> left); 
            
            // Add its right child if it exists
            if(node-> right) nodeStack.push(node-> right);
        }
        
        // Reverse the list to get the postorder traversal
        reverse(result.begin(), result.end());

        return result; // Return the result
    }
};