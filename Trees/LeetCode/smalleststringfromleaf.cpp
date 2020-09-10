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
        
        // sum-=root->val;
        
        temp.push_back(root->val);
        
        if(root->left==NULL && root->right==NULL){
            ans.push_back(temp);
        }
        
     
            
            solve(root->left, sum, ans, temp);
        
        
       
            
            solve(root->right, sum, ans, temp);
        
        
        
        temp.pop_back();
        
        
        
        
        
    }
    
    
    
    string smallestFromLeaf(TreeNode* root) {
        
        vector<vector<int>> ans;
        vector<int> temp;
        
        solve(root, 0, ans, temp);
        
        string a="zzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzz";
        
        
        for(int i=0; i<ans.size(); i++){
            
            string temp="";
            
            for(int j=0; j<ans[i].size(); j++){
                cout<<ans[i][j]<<" ";
                temp+=ans[i][j]+'a';
                
            }
            reverse(temp.begin(), temp.end());
            
            cout<<temp<<endl;
            if(temp<a){
                a=temp;
            }
            
            cout<<endl;
  
            
        }
        
        // reverse(a.begin(), a.end());
        
        
        return a;

        
        
    }
};
