#include <iostream>
using namespace std;

class tree {


public:

  tree(int n): left( NULL ), right( NULL ), data(n) { }

  tree* insert(tree *node, int _key)
  {
    if( node == NULL )
      node = new tree(_key);
    else if ( node->data >_key )
      node->left = insert(node->left,_key);
    else
      node->right = insert(node->right,_key);
      
    return node;

  }



void top_view(tree * root)
{
  
    print_left(root->left);
    cout << root->data << " ";
    print_right(root->right);
  
}

void print_left(tree *root)
    {
     if ( root != NULL)
      {
        print_left(root->left);
        cout << root->data<<" ";
    }
}

void print_right(tree *root)
    {
      if ( root != NULL)
      {
        cout << root->data<<" " ;
        print_right(root->right);  
    }
  }

private:
  tree *left;
  tree *right;
  int data;
};

int main()
{
  tree *root = NULL;
  
  root = root->insert(root,3);
  root = root->insert(root,5);
  root = root->insert(root,1);
  root = root->insert(root,4);
  root = root->insert(root,6);
  root = root->insert(root,2);
  root = root->insert(root,7);
  root = root->insert(root,8);

  root->top_view(root);

  return 0;
}