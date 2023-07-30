TreeNode*inordersucc(TreeNode*root,TreeNode*p)
{
    TreeNode*suc=NULL;
    while(root!=NULL){
        if(p->val>=root->val){
            root=root->right;
        }
        else{
            suc=root;
            root=root->left;
        }
    }
    return suc;
}