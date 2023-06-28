#include<bits/stdc++.h>
using namespace std;
struct node
{
    int data;
    struct node*left,*right;
};
int maxdepth(node*root)
{
    if(root==NULL) return 0;
    int lh = maxdepth(root->left); 
    int rh = maxdepth(root->right); 
    return 1 + max(lh, rh); 
}
struct node * newNode(int data) {
  struct node * node = (struct node * ) malloc(sizeof(struct node));
  node -> data = data;
  node -> left = NULL;
  node -> right = NULL;

  return (node);
}
int main()
{
  struct node * root = newNode(1);
  root -> left = newNode(2);
  root -> left -> left = newNode(4);
  root -> left -> right = newNode(5);
  root -> right = newNode(3);
  root -> right -> left = newNode(6);
  root -> right -> right = newNode(7);
  cout << "Height of tree is " << maxdepth(root);
  return 0;
}