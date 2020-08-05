/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* left;
    Node* right;
    Node* next;

    Node() : val(0), left(NULL), right(NULL), next(NULL) {}

    Node(int _val) : val(_val), left(NULL), right(NULL), next(NULL) {}

    Node(int _val, Node* _left, Node* _right, Node* _next)
        : val(_val), left(_left), right(_right), next(_next) {}
};
*/

class Solution {
public:
    
    void UpdateNextPointer(Node *root, map<int, vector<Node*>> &levelWise, int level) {
        
        if(!root) return;
        
        levelWise[level].push_back(root);
        
        UpdateNextPointer(root->left, levelWise, level+1);
        UpdateNextPointer(root->right, levelWise, level+1);
        
        
    }
    
    
    Node* connect(Node* root) {
        
        if(!root) return nullptr;
        
        map<int, vector<Node*>> mapLevel;
        
        UpdateNextPointer(root, mapLevel, 0);
    
        Node *resultNode = root;
        
        root->next = nullptr;
        
        for(auto &it : mapLevel) {
            
            vector<Node *> allnodes = it.second;
            for(int i = 0 ; i < allnodes.size()-1; i++) {
                allnodes[i]->next = allnodes[i+1];
            }
            
        }
        
        return root;
        
    }
};