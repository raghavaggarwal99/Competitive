/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
void allpaths(vector<vector<int>>& res, vector<int>& temp, TreeNode* A, int sum)
{
    if (!A){
        return;
    }
    
    sum -= A->val;
    
    temp.push_back(A->val);
    
    if (!A->left && !A->right && sum == 0){
        res.push_back(temp);
    }
    
    if (A->left){
        allpaths(res, temp, A->left, sum);
    }
    
    if (A->right){
        allpaths(res, temp, A->right, sum);
    }
    temp.pop_back();
} 

vector<vector<int> > Solution::pathSum(TreeNode* A, int B) {
    
    vector<vector<int>> res;
    vector<int> temp;
    
    allpaths(res,temp,A,B);
    
    return res;
    
    
}

