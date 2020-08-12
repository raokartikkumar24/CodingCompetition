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
 #include <iostream>
#include <map>
#include <vector>
#include <queue>
#include <algorithm>
#include <cmath>

using namespace std;
int answer = 0;

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

  
    void populatePaths(int path[], int length) {
        
        int t = length;
        string  pathSum = "";
        int i = 0;
        while(t > 0) {
            
            pathSum += to_string(path[i]);
            t--;i++;
            
        }
        
        answer += stoi(pathSum);
    }
    
    
    void traverse(TreeNode *root, int path[], int index) {
        
        if(!root) return;
        
        path[index] = root->val;
        index++;
        if(root->left == nullptr && root->right == nullptr) {
            populatePaths(path, index);
        }
        
        traverse(root->left,path, index);
        traverse(root->right, path, index);
        
    }
    
    
    int sumNumbers(TreeNode* root) {
        
        int path[100] = {0};
        
        traverse(root, path, 0);
        
        return answer;
    }

private:
TreeNode *left;
TreeNode *right;
int val;

};

int main()
{
    TreeNode *root = NULL;
    
    root = root->insert(root,2);
    root = root->insert(root,1);
    root = root->insert(root,3);
  
    cout << root->sumNumbers(root);
    
    return 0;
    

}