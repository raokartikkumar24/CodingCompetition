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
    
    int sum = 0;
    
    void traverse(TreeNode* root) {
        if(!root) return;
        
        if(root->left != nullptr) {
            if(root->left->left == nullptr && root->left->right == nullptr) //leaf node
                sum += root->left->val;
        }
        traverse(root->left);
        traverse(root->right);
        
    }
    
    int sumOfLeftLeaves(TreeNode* root) {
        traverse(root);
        return sum;
    }
};