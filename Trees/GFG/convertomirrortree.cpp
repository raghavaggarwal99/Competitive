void mirror(Node* root) 
{
     // Your Code Here
     
     
     if(root==NULL){
         return;
     }
     
     if(root->left==NULL && root->right==NULL){
         return;
     }
     
     Node * temp=root->left;
     root->left=root->right;
     root->right=temp;
     
     mirror(root->left);
     mirror(root->right);
     
     
     
     
     
     
     
     
     
     
}
