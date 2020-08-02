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
    
    
    int findSecondMinimumValue(TreeNode* root) {
        
          solve(root);
       
        sort(ans.begin(), ans.end());
        
        if(ans.size()==1){
            return -1;
        }
        int v=ans[0];
        
        for(int i=1; i<ans.size(); i++){
            
            if(ans[i]==v){
                continue;
            }
            else{
                return ans[i];
            }
            
        }
        
        return -1;
        
        
    }
};



