class Solution {
public:
    
    void levelOrderTraversal(TreeNode *root, map<int, vector<int>> &mapOfLevel, int level) {
        
        if(!root) return;
        
        levelOrderTraversal(root->left, mapOfLevel, level+1);
        mapOfLevel[level].push_back(root->val);
        levelOrderTraversal(root->right, mapOfLevel, level+1);
    }
    
    vector<vector<int>> levelOrder(TreeNode* root) {
        map<int, vector<int>> themap;
      //  themap[0].push_back(root->val);
        levelOrderTraversal(root, themap, 0);
        
        vector<vector<int>> result;
        
        for(auto &it : themap) {
            result.push_back(it.second);
        }
        
        return result;
    }
};