int solve(Node *root){
    
    if(root==NULL){
        return 0;
    }
    if (root->left == NULL && root->right == NULL)  
        return root->data; 
    
    int sum=root->data;
    
    int left= solve(root->left);
    int right=solve(root->right);
    
    root->data+=left;
    // root->data+=right;
    
    return root->data+right;

    
}

void toSumTree(Node *root)
{
    // Your code here
    
    
    int sum=0;
    
    solve(root);
    
    // printInorder(root);
    
   
    
    
    
    
    
    
}


