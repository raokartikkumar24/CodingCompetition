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
    
	 TreeNode() : val(0), left(nullptr), right(nullptr) {}
     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}

	TreeNode* insert(TreeNode *node, int _key)
	{
		if( node == NULL )
			node = new tree(_key);
		else if ( node->key >_key )
			node->left = insert(node->left,_key);
		else
			node->right = insert(node->right,_key);
			
		return node;

	}

    TreeNode* invertTree(TreeNode* root) {
        
        if(!root) return nullptr;
        
        root->left = invertTree(root->left);
        root->right = invertTree(root->right);
        
        swap(root->left, root->right);
       
        return root;
        
    }

private:
int val;
TreeNode *left;
TreeNode *right;
    

};