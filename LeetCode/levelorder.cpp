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
    vector<int> r;
    vector<vector<int>> ans;
    int height(TreeNode* node)  
    {  
        if (node == NULL)  
            return 0;  
        else
        {  
            /* compute the height of each subtree */
            int lheight = height(node->left);  
            int rheight = height(node->right);  

            /* use the larger one */
            if (lheight > rheight)  
                return(lheight + 1);  
            else return(rheight + 1);  
        }  
    }  
    
    
    void printGivenLevel(TreeNode* root, int level)  
    {  
        if (root == NULL)  
            return;  
        
        if (level == 1){
            // cout << root->val << " ";  
            r.push_back(root->val);
        }
        else if (level > 1)  
        {  
            printGivenLevel(root->left, level-1);  
            printGivenLevel(root->right, level-1);  
        }  
    }  

    vector<vector<int>> levelOrder(TreeNode* root) {
        
        
         int h = height(root);  
         int i;  
        
        for (i = 1; i <= h; i++){
            r.clear();
            printGivenLevel(root, i);  
            ans.push_back(r);
           
        }
        
        return ans;
        
        
    }
    
    
    
    
};


