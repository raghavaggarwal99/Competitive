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
    
    void solve(TreeNode* root, vector<int> &temp){
        
        if(root==NULL){
            return;
        }
        
        temp.push_back(root->val);
        
        solve(root->left, temp);
        solve(root->right, temp);
        
        
        
    }
    
    
    vector<int> getAllElements(TreeNode* root1, TreeNode* root2) {
        
        
        vector<int> temp;
        
        vector<int> ans;
        
        solve(root1, temp);
        
        for(int i=0; i<temp.size(); i++){
            ans.push_back(temp[i]);
        }
        
        temp.clear();
        
        
        solve(root2, temp);
        
        for(int i=0; i<temp.size(); i++){
            ans.push_back(temp[i]);
        }
        
        sort(ans.begin(), ans.end());
        
        return ans;
        
        
        
    }
};
