------------------------------------------------Brute-------------------------------
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
    bool isBalanced(TreeNode* root) {
        if (root == nullptr) return 1;
        int c, d;
        int x = maxDepth(root->left);
        int y = maxDepth(root->right);
        if (abs(x - y) > 1) {
            return 0;
        } else {
            c = isBalanced(root->left);
            d = isBalanced(root->right);
        }
        return c && d;
    }
    int maxDepth(TreeNode* root) {
        int count = 0;
        if (root == nullptr) {
            return count;
        }
        int a = maxDepth(root->left);
        int b = maxDepth(root->right);
        return max(a, b) + 1;
    }
};
-----------------------------------------------Optimal-----------------------------------------------
// Definition for a binary tree node.
// struct TreeNode {
//     int data;
//     TreeNode *left;
//     TreeNode *right;
//     TreeNode(int val) : data(val), left(nullptr), right(nullptr) {}
// };
class Solution {
public:
    // Function to check if the tree is balanced
    bool isBalanced(TreeNode *root) {
        // Check if the tree's height difference
        // between subtrees is less than 2
        // If not, return false; otherwise, return true
        return dfsHeight(root) != -1;
    }

private:
    // Recursive function to calculate the height of the tree
    int dfsHeight(TreeNode *root) {
        // Base case: if the current node is NULL,
        // return 0 (height of an empty tree)
        if (root == nullptr) return 0;

        // Recursively calculate the height of the left subtree
        int leftHeight = dfsHeight(root->left);
        // If the left subtree is unbalanced,
        // propagate the unbalance status
        if (leftHeight == -1) return -1;

        // Recursively calculate the height of the right subtree
        int rightHeight = dfsHeight(root->right);
        // If the right subtree is unbalanced,
        // propagate the unbalance status
        if (rightHeight == -1) return -1;

        // Check if the difference in height between left and right subtrees is greater than 1
        // If it's greater, the tree is unbalanced,
        // return -1 to propagate the unbalance status
        if (std::abs(leftHeight - rightHeight) > 1) return -1;

        // Return the maximum height of left and right subtrees, adding 1 for the current node
        return std::max(leftHeight, rightHeight) + 1;
    }
};
