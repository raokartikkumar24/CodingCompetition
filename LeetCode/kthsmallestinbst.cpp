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
    
    void inorder(TreeNode *root, vector<int> &elements)
    {
        if(!root) return;
        
        inorder(root->left, elements);
        elements.push_back(root->val);
        inorder(root->right, elements);
            
        
    }
    
    int kthSmallest(TreeNode* root, int k) {
        
            if(!root) return 0;
        
            vector<int> ele;
            inorder(root, ele);
        
            return ele[k-1];
        
    }
};