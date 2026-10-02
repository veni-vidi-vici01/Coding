-----------------------------------------------------Brute-----------------------------------------
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
    int diameterOfBinaryTree(TreeNode* root) {
        int max_sum=0;
        return Max_Diameter(root,max_sum);
        
    }
    int Max_Diameter(TreeNode* root,int max_sum){
        if(root==nullptr){
            return max_sum;
        }
        int sum=maxDepth(root->left)+maxDepth(root->right);
        if(sum>max_sum){
            max_sum=sum;
        }
        int a=Max_Diameter(root->left,max_sum);
        int b=Max_Diameter(root->right,max_sum);
        return max(a,b);
    } 
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
----------------------------------------------------Optimal----------------------------------------
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
    int diameterOfBinaryTree(TreeNode* root) {
        int max_sum=0;
        int a=maxDepth(root,max_sum);
        return max_sum;
        
    }
    int maxDepth(TreeNode* root,int &max_sum) {
        int count = 0;
        if (root == nullptr) {
            return count;
        }
        int a = maxDepth(root->left,max_sum);
        int b = maxDepth(root->right,max_sum);
        if(a+b>max_sum){
            max_sum=a+b;
        }
        return max(a,b)+1;
    }
};