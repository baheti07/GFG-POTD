#include <bits/stdc++.h>

using namespace std;

struct node {
  int data;
  struct node * left, * right;
};
struct node * newNode(int data) {
  struct node * node = (struct node * ) malloc(sizeof(struct node));
  node -> data = data;
  node -> left = NULL;
  node -> right = NULL;

  return (node);
}
node* Insert(node *root,int data)
{
	if(root==NULL)
	{
		return newNode(data);
	}
	if(data<root->data)
	{
		root->left=Insert(root->left,data);
	}
	else
	{
		root->right=Insert(root->right,data);
	}
	return root;
}
void inorder(struct node *root)
{
    if(root == NULL)
        return;
    inorder(root->left);
    printf("%d ",root->data);
    inorder(root->right);
}

int main()
{
    struct node *root = NULL;
    root = Insert(root,100);
    root = Insert(root,50);
    root = Insert(root,150);
    root = Insert(root,50);

    cout<<"Inorder after inserting: ";
    inorder(root);

    return 0;
}