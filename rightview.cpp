#include<bits/stdc++.h>
using namespace std;
struct node
{
    int data;
    struct node*left,*right;
};
void right(node*root,int level,vector<int>&res)
{
    if(root==NULL) return;
    if(res.size()==level) res.push_back(root->data);
    right(root->right,level+1,res);
    right(root->left,level+1,res);
}   
struct node*newnode(int data)
{
    struct node*node=(struct node*)malloc(sizeof(struct node));
    node->data=data;
    node->left=NULL;
    node->right=NULL;
    return (node);
}
int main()
{
    struct node*root = newnode(20);
    root->left = newnode(8);
    root->right = newnode(22);
    root->left->left = newnode(5);
    root->left->right = newnode(3);
    root->left->right->left=newnode(88);
    root->right->right = newnode(25);
     vector < int > res;
    right(root,0, res);

  cout << "The right view is : ";
  for (int i = 0; i < res.size(); i++) {
    cout <<res[i] << " ";
  }
  return 0;
}
