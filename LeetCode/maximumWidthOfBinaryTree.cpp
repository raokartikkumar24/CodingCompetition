#include <iostream>
#include <map>
#include <vector>

using namespace std;

class TreeNode {


public:

    TreeNode(int n): left( NULL ), right( NULL ), val(n) { }

    TreeNode* insert(TreeNode *node, int _key) {
        if( node == NULL )
            node = new TreeNode(_key);
        else if ( node->val >_key )
            node->left = insert(node->left,_key);
        else
            node->right = insert(node->right,_key);
        
        return node;

    }

    void TreeNodeTraverse(TreeNode *root, int hd, map<int, vector<int>> &width) {
        
        if(!root) 
        {
            width[hd].push_back(-1);
            return;
        }
        
        width[hd].push_back(root->val);
        
        TreeNodeTraverse(root->left, hd+1, width);
        TreeNodeTraverse(root->right, hd+1, width);
        
    }
    
    int widthOfBinaryTreeNode(TreeNode* root) {
        
        map<int, vector<int>> widths;
        
        TreeNodeTraverse(root, 0, widths);
        
        int noOfLevels = widths.size();
        
        int maxWidth = 1;
        
        for(int i = 0 ; i < noOfLevels-1; i++) {
            
            int vecSize = (int)widths[i].size();
           // cout << i << "\t" << vecSize << "\n";
            if(widths[i][0] != -1 && widths[i][vecSize-1] != -1) {
                maxWidth = max(maxWidth, (int)widths[i].size());
            }
        }

        for(int i = 0 ; i < noOfLevels-1; i++) {
            
            vector<int> nodes = widths[i];
            cout << "level : " << i << "\t";
            for(auto &n : nodes) {
                cout << n << "\t";
            }
            cout << "\n";
        }
        
        return maxWidth;
        
    }
    
private:
TreeNode *left;
TreeNode *right;
int val;

};

int main()
{
	TreeNode *root = NULL;
	
	root = root->insert(root,50);
	root = root->insert(root,80);
    root = root->insert(root,45);
	root = root->insert(root,40);
    root = root->insert(root,30);
    root = root->insert(root,90);
    root = root->insert(root,100);
   
   int val = root->widthOfBinaryTreeNode(root);
   cout << val << "\n";
    
	return 0;
	

}
