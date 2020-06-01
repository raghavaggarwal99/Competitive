/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    
        int level=0;
    
        void solve(TreeNode* root){

            if(root==NULL){
                return ;
            }
            if(root->left!=NULL){
                if(root->left->left!=NULL){
                    if(root->val%2==0){
                        level+=root->left->left->val;
                    }
                }
                if(root->left->right!=NULL){
                    if(root->val%2==0){
                        level+=root->left->right->val;
                    }
                }
            }
            if(root->right!=NULL){
                if(root->right->right!=NULL){
                    if(root->val%2==0){
                        level+=root->right->right->val;
                    }
                }
                 if(root->right->left!=NULL){
                    if(root->val%2==0){
                        level+=root->right->left->val;
                    }
                }
            }


            solve(root->left);
            solve(root->right);



        }
    int sumEvenGrandparent(TreeNode* root) {
        
           solve(root);
            return level;
        
        
        
        
    }
};

