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

    /*
    //Using queues. doesnt work correctly. Need to revisit
    vector<int> largestValues(TreeNode* root) {
        
        if(root == nullptr) nullptr;
        
          vector<int> result;
        std::map<int, vector<int>> levelMap;
        
        int level = 0;
        std::queue<TreeNode*> qu;
        qu.push(root);
        vector<int> test;
        test.push_back(root->val);
        levelMap.insert({0, test});
        
        while(!qu.empty()) {
            
            TreeNode *temp = qu.front();
            qu.pop();
            vector<int> tree_values;
            level++;
            
            if(temp->left != nullptr) {
                qu.push(temp->left);
                tree_values.push_back(temp->left->val);
                
            }
            if(temp->right != nullptr) {
                qu.push(temp->right);
                tree_values.push_back(temp->right->val);
            }
            
            levelMap.insert({level, tree_values});
        }
        
        for(auto &it : levelMap) {
           int max_val = 0;
            for(auto &vec : it.second) {
                max_val = max(max_val, vec);
            }
            result.push_back(max_val);
            
        }
        
        return result;
        
    }
    */
};