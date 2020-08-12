#include <bits/stdc++.h> 
using namespace std; 
  
/* A binary tree node has data, left  
child and right child */
struct node 
{ 
    int data; 
    struct node* left; 
    struct node* right; 
}; 
  
/* returns 1 if children sum property holds  
for the given node and both of its children*/
int isSumProperty(struct node* root) 
{ 
    
    int left_data = 0, right_data = 0; 
  
    if(root==NULL || root->left==NULL && root->right==NULL){
        return 1;
    }  
    else{
        
        if(root->left){
            left_data=root->left->data;
        }
         if(root->right){
            right_data=root->right->data;
        }
        
        if((root->data == left_data + right_data)&& 
            isSumProperty(root->left) && 
            isSumProperty(root->right)) 
        return 1; 
        else
        return 0; 
    }
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
} 
  
/* 
Helper function that allocates a new node 
with the given data and NULL left and right 
pointers. 
*/
struct node* newNode(int data) 
{ 
    struct node* node = 
        (struct node*)malloc(sizeof(struct node)); 
    node->data = data; 
    node->left = NULL; 
    node->right = NULL; 
    return(node); 
} 
  
// Driver Code 
int main() 
{ 
    struct node *root = newNode(10); 
    root->left     = newNode(8); 
    root->right = newNode(2); 
    root->left->left = newNode(3); 
    root->left->right = newNode(5); 
    root->right->right = newNode(2); 
    if(isSumProperty(root)) 
        cout << "The given tree satisfies "
            << "the children sum property "; 
    else
        cout << "The given tree does not satisfy "
            << "the children sum property "; 
  
    getchar(); 
    return 0; 
} 
