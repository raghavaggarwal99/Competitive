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
    
    int kthSmallest(TreeNode* root, int k) {
        
       
        
        solve(root);
        
//         for(int i=0; i<ans.size(); i++){
//             cout<<ans[i]<<" ";
//         }
        
//         cout<<endl;
        
       
        
        sort(ans.begin(), ans.end());
        
        return ans[k-1];
        
        
        
    }
};
