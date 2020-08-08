/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */

void printLevel(TreeNode* A, int level,vector<vector<int>> &ans,int copy)
{
    if(A == NULL)
        return;
    if(level == 1){
        ans[copy-1].push_back(A->val);
        // cout<<A->val<<" ";
    }
    else if (level > 1)
    {
        printLevel(A->left, level-1,ans,copy);
        printLevel(A->right, level-1,ans,copy);
    }
}


int height(TreeNode* A)  
{  
    if (A == NULL)  
        return 0;  
    else
    {  
        /* compute the height of each subtree */
        int lheight = height(A->left);  
        int rheight = height(A->right);  
  
        /* use the larger one */
        if (lheight > rheight)  
            return(lheight + 1);  
        else return(rheight + 1);  
    }  
}  
 
vector<vector<int> > Solution::levelOrder(TreeNode* A) {
    
    int h=height(A);
    
    vector<vector<int>> ans(h);
    
    
    for(int i=1; i<=h; i++){
        // cout<<endl;
        printLevel(A, i,ans,i);
    }
    
    // solve(A,ans,0);
    return ans;
    
    
}

