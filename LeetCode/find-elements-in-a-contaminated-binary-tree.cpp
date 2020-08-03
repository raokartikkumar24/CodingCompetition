#include <iostream>
#include <vector>
#include <string>


using namespace std;

/* Definition for a binary tree node.*/
  struct TreeNode {
     int val;
      TreeNode *left;
      TreeNode *right;
      TreeNode() : val(0), left(nullptr), right(nullptr) {}
      TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
      TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
  };
 
class FindElements {
public:
    
    TreeNode* recoverTree(TreeNode* root) {
        if(!root) return nullptr;
        
        if(root->left != nullptr) {
            root->left->val = 2 * root->val + 1;
            root->left = recoverTree(root->left);
        }
        if(root->right != nullptr) {
            root->right->val = 2 * root->val + 2;
            root->right = recoverTree(root->right);
        }
         
        return root;
        
    }
    
    FindElements(TreeNode* root) {
        root->val = 0;
        m_root = recoverTree(root);
    }
    
    
    bool findElement(TreeNode *root, int target) {
        
        if(!root) return false;
        
        if(root->val == target)
            return true;
        
        return findElement(root->left, target) || findElement(root->right, target);
        
    }
    
    bool find(int target) {
        
        return findElement(m_root, target);
        
    }
    
    TreeNode *m_root;
};

/**
 * Your FindElements object will be instantiated and called as such:
 * FindElements* obj = new FindElements(root);
 * bool param_1 = obj->find(target);
 */
int main()
{

    TreeNode *root = new TreeNode;

    FindElements* obj = new FindElements(root);
    int target;
    cin >> target;
    bool param_1 = obj->find(target);
    cout << param_1 << "\n";

    return 0;
}