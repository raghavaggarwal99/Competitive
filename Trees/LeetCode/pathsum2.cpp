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

    
    
    void solve(TreeNode* root, int sum, vector<vector<int>> &ans, vector<int> &temp){
        
        
        
        if(root==NULL){
            return;
        }
        
        sum-=root->val;
        
        temp.push_back(root->val);
        
        if(sum==0 && root->left==NULL && root->right==NULL){
            ans.push_back(temp);
        }
        
        
        if(root->left){
            
            solve(root->left, sum, ans, temp);
        }
        
        if(root->right){
            
            solve(root->right, sum, ans, temp);
        }
        
        
        temp.pop_back();
        
        
        
        
        
    }
    
    
    
    
    vector<vector<int>> pathSum(TreeNode* root, int sum) {
        
 
        vector<vector<int>> ans;
        vector<int> temp;
        
        solve(root, sum, ans, temp);
        
        return ans;

        
    }
};
