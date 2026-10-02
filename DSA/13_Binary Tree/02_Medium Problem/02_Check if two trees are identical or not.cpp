-----------------------------------------------------------Optimal----------------------------------
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
    bool isSameTree(TreeNode* p, TreeNode* q) {
        if(p==nullptr&&q==nullptr){
           return 1;
        }else if(p==nullptr||q==nullptr){
            return 0;
        }
        bool a=isSameTree(p->left,q->left);
           if(p->val!=q->val){
            return 0;
           }
        bool b=isSameTree(p->right,q->right);
        return a&&b;
    }
};