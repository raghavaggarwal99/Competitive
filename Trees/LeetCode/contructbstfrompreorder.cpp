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
    
 TreeNode *construct(vector<int>&preorder, int left, int right, int& i)
    {
        if(i >= preorder.size()) return NULL;
        
        int val = preorder[i];
        if(val > left && val < right)
        {
            i++;
            TreeNode *root = new TreeNode(val);
            root->left = construct(preorder, left, val, i);
            root->right = construct(preorder, val, right, i);
            return root;
        }
        
        return NULL;
    }
    
    
    TreeNode* bstFromPreorder(vector<int>& preorder) {
        int i = 0;
        
        return construct(preorder, INT_MIN, INT_MAX, i);
    }
    
    
    
};
