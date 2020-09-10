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
            return max(lheight, rheight)+1;
            
        }  
    }  
    
      void printGivenLevel(TreeNode* root, int level, bool check)  
    {  
        if (root == NULL)  
            return;  
        
        if (level == 1){
            // cout << root->val << " ";  
            r.push_back(root->val);
        }
        else if (level > 1)  
        {  
            if(check==1){
                printGivenLevel(root->left, level-1, check);  
                printGivenLevel(root->right, level-1, check);  
            }
            else{
                printGivenLevel(root->right, level-1, check);  
                printGivenLevel(root->left, level-1, check);  
               
            }
        }  
    }  

    
    
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        
        int h = height(root);  
        int i;  
        
        bool check=true;
        
        for (i = 1; i <= h; i++){
            r.clear();
            printGivenLevel(root, i, check);  
            
            ans.push_back(r);
            check=!check;
            
        }
        
        return ans;
        
    }
};



