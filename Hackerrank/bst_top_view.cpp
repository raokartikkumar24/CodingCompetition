#include <iostream>
#include <stack>
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

  void top_view_stack(tree *root)
  {
    stack<int> st;
    tree *temp = root;
    while( temp != NULL)
    {
        st.push(temp->data);
        temp = temp->left;

    }

    while( !st.empty() )
    {
        cout << st.top() << " ";
        st.pop();
    }


    root = root->right; // already printed the root
    while( root != NULL) {
      cout << root->data << " ";
      root = root->right;
    }

    cout << endl;



  }

private:
  tree *left;
  tree *right;
  int data;
};

int main()
{
  tree *root = NULL;
  
  root = root->insert(root,50);
  root = root->insert(root,40);
  root = root->insert(root,60);
  root = root->insert(root,30);
  root = root->insert(root,45);
  root = root->insert(root,55);
  root = root->insert(root,65);

  root->top_view(root);

  cout << endl;

  root->top_view_stack(root);

  return 0;
}