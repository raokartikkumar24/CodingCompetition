#include <iostream>
#include <vector>
#include <string>


using namespace std;
class Tree {
    public:
    Tree *left;
    Tree *right;
    int val;
    
    Tree *insert(Tree *root, int val) {
        
        if(root == nullptr) {
            root = new Tree;
            root->left = nullptr;
            root->right = nullptr;
            root->val = val;
            
        }
        else if(val < root->val) {
            root->left = insert(root->left, val);
        }
        else {
            root->right = insert(root->right, val);
        }
        
        return root;
    }
    
    bool findElement(Tree *root, int value) {
        
        if(!root) return false;
        
        if(root->val == value) return true;
        else if(value < root->val) {
            return findElement(root->left, value);
        }
        else {
            return findElement(root->right, value);
        }
    }
    
    
    Tree *findMinValueNode(Tree *root) {
        Tree *current = root;
        while(current && current->left != nullptr)
            current = current->left;
        
        return current;
    }
    
    Tree *deleteNode(Tree *root, int key) {
        
        if(!root) return root;
        
        if(key <= root->val) {
            root->left = deleteNode(root->left, key);
        }
        else if(key >= root->val) {
            root->right = deleteNode(root->right, key);
        }
        else {
            if(root->left == nullptr) {
                Tree *temp =  root->right;
                delete root;
                return temp;
            }
            
            if(root->right == nullptr) {
                Tree *temp  = root->left;
                delete root;
                return temp;
            }
            
            Tree *newNode = findMinValueNode(root->right);
            
            root->val = newNode->val;
            
            root->right = deleteNode(root->right, newNode->val);
            
        }
        
        return root;
        
    }
};

class MyHashSet {
public:
    /** Initialize your data structure here. */
    MyHashSet() {
        hashRoot = nullptr;
        dummyNode = new Tree;
    }
    
    void add(int key) {
        hashRoot = dummyNode->insert(hashRoot,key);
    }
    
    void remove(int key) {
        hashRoot = hashRoot->deleteNode(hashRoot, key);
    }
    
    /** Returns true if this set contains the specified element */
    bool contains(int key) {
        return hashRoot->findElement(hashRoot, key);
    }
    
    private:
    Tree *hashRoot;
    Tree *dummyNode;
};

int main()
{
    MyHashSet hashSet;
    hashSet.add(1);         
    hashSet.add(2);         
    cout << hashSet.contains(1) << "\n";    // returns true
    cout << hashSet.contains(3) << "\n";    // returns false (not found)
    hashSet.add(2);          
    cout << hashSet.contains(2) << "\n";    // returns true
    hashSet.remove(2);          
    cout << hashSet.contains(2) << "\n";    // returns false (already removed)

    return 0;
}