/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */

void solve(TreeNode* node,vector<int> &ans)
{
    if (node==NULL)
        return;
        
    // cout<<node->val;
    
    ans.push_back(node->val);
 
     solve(node->left,ans);
     solve(node->right,ans);
} 
 
 
 
int Solution::kthsmallest(TreeNode* A, int B) {
    
    
    vector<int> ans;
    solve(A,ans);
    
    
    sort(ans.begin(),ans.end());
    
    
    // for(int i=0; i<ans.size(); i++){
    //     cout<<ans[i]<<" ";
    // }
    
    return ans[B-1];
    
    
}

