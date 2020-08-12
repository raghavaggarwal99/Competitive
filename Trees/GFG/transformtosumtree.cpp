
int solve(Node *root){
    
    if(root==NULL){
        return 0;
    }
    
    int sum=root->data;
    
    root->data= solve(root->left)+solve(root->right);
    
    return root->data+sum;
    
}

void toSumTree(Node *root)
{
    // Your code here
    
    
    int sum=0;
    
    solve(root);
    
    // printInorder(root);
    
   
    
    
    
    
    
    
}


