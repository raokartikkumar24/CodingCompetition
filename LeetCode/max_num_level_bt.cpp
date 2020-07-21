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
    
   void maxlevel(vector<int> &result, TreeNode* root, int level) {
       
       if(!root) return;
       
       if(level == result.size()) {
           result.push_back(root->val);
       }
       
       else {
           
           result[level] = max(result[level], root->val);
           
       }
       
       maxlevel(result, root->left, level+1);
       maxlevel(result, root->right, level+1);
       
   }
  
    vector<int> largestValues(TreeNode* root) {
        
       vector<int> re;
        
        maxlevel(re, root, 0);
        
        return re;
        
    }
};