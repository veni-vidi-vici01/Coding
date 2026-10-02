------------------------------------------------------Brute---------------------------
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
    vector<vector<int>> treeTraversal(TreeNode* root) {
        vector<int> x;
        vector<vector<int>> v;
        InTraverse(root, x);
        v.push_back(x);
        x.clear();
        Pretraverse(root, x);
        v.push_back(x);
        x.clear();
        Posttraversal(root, x);
        v.push_back(x);
        x.clear();
        return v;
    }
    void Pretraverse(TreeNode* root, vector<int>& v) {
        if (root == nullptr) {
            return;
        }
        v.push_back(root->data);
        Pretraverse(root->left, v);
        Pretraverse(root->right, v);
        return;
    }
    void Posttraversal(TreeNode* root, vector<int>& v) {
        if (root == nullptr) {
            return;
        }
        Posttraversal(root->left, v);
        Posttraversal(root->right, v);
        v.push_back(root->data);
        return;
    }
    void InTraverse(TreeNode* root, vector<int>& v) {
        if (root == nullptr) {
            return;
        }
        InTraverse(root->left, v);
        v.push_back(root->data);
        InTraverse(root->right, v);
        return;
    }
};
---------------------------------------------Optimal--------------------------------------
// struct TreeNode {
//     int data;
//     TreeNode *left;
//     TreeNode *right;
//     TreeNode(int val) : data(val), left(nullptr), right(nullptr) {}
// };
class Solution {
public:
    vector<vector<int>> treeTraversal(TreeNode* root) {
        // Vectors to store the traversals
        vector<int> pre, in, post;

        // If the tree is empty, return empty traversals
        if (root == nullptr) return { in, pre, post };

        // Stack to maintain nodes and their traversal state
        stack<pair<TreeNode*, int>> st;

        // Start with the root node and state 1 (preorder)
        st.push({ root, 1 });

        while (!st.empty()) {
            // Get the top element from the stack
            auto [node, state] = st.top();
            st.pop();

            // Process the node based on its state
            if (state == 1) {
                // Preorder: Add node data
                pre.push_back(node->data);
                // Change state to 2 (inorder) for this node
                st.push({ node, 2 });

                // Push left child onto the stack for processing
                if (node->left != nullptr) {
                    st.push({ node->left, 1 });
                }
            } else if (state == 2) {
                // Inorder: Add node data
                in.push_back(node->data);
                // Change state to 3 (postorder) for this node
                st.push({ node, 3 });

                // Push right child onto the stack for processing
                if (node->right != nullptr) {
                    st.push({ node->right, 1 });
                }
            } else {
                // Postorder: Add node data
                post.push_back(node->data);
            }
        }

        // Return the traversals as a 2D vector
        return { in, pre, post};
    }
};
