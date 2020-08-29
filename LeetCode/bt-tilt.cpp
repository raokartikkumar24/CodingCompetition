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
    
       int answer = 0;
    int findTiltUtil(TreeNode* root) {
        
       if(!root) return 0;
          
        int leftSum = findTiltUtil(root->left);
        int rightSum = findTiltUtil(root->right);
        
        answer += abs(leftSum - rightSum);
        
        
        return leftSum + rightSum + root->val;
        
        
    }
    
    int findTilt(TreeNode *root)
    {
        findTiltUtil(root);
        return answer;
    }
 };