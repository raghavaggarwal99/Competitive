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
    
    void countGood(TreeNode* root, int max_path, int &ans)
    {
        if(root->val>=max_path)
        {
            (ans)++;
            max_path=root->val;
        }
        
        if(root->left)
        {
            countGood(root->left, max_path, ans);
        }
        if(root->right)
        {
            countGood(root->right, max_path, ans);
        }
    }
    

    int goodNodes(TreeNode* root) {
        
        int n=0;
        
        countGood(root, root->val, n);
        return n;
        
        
        
        
    }
};


