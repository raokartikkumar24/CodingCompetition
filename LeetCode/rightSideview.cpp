#include <iostream>
#include <map>
#include <vector>
#include <queue>

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

    void LOT(TreeNode *root, map<int, vector<int>> &maps, int level) {
        if(!root) return;
        
        maps[level].push_back(root->val);
        
        LOT(root->left, maps, level+1);
        LOT(root->right, maps, level+1);
        
    }
    
    
    vector<int> rightSideView(TreeNode* root) {
        map<int, vector<int>> levelMap;
        
        LOT(root, levelMap, 0);
        
        vector<int> result;
        
        for(auto &it : levelMap) {
            
            int vectSize = (int)it.second.size();
            
            result.push_back(it.second[vectSize-1]);
            
        }
        
        return result;
        
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
   
    vector<int> result = root->rightSideView(root);
  
    for(auto &it : result) {
        cout << it << "\t";
    }
    cout << "\n";
    
	return 0;
	

}
