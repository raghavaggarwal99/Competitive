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
    
      vector<int> ans;
    
        void solve(TreeNode* root){

            if(root==NULL){
                return ;
            }

            ans.push_back(root->val);

            solve(root->left);
            solve(root->right);



        }
    
    
    int minDiffInBST(TreeNode* root) {
        
           solve(root);
       
        sort(ans.begin(), ans.end());
        
        if(ans.size()==1){
            return -1;
        }
      
        int v=INT_MAX;
        
        for(int i=1; i<ans.size(); i++){
            
            if(ans[i]-ans[i-1]<v){
                v=ans[i]-ans[i-1];
            }
            
        }
        
        return v;
        
        
    }
};


