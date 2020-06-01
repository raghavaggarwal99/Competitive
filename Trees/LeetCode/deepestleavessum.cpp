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
    
   
 int maxDepth;
   map <int, int> m;
    
   void solve(TreeNode* node, int level = 0){
       
      if(!node){
          return;
      }
      maxDepth = max(level, maxDepth);
       
      m[level] += node->val;
       
      solve(node->left, level + 1);
      solve(node->right, level + 1);
       
   }
    
    
    
    int deepestLeavesSum(TreeNode* root) {
        
         maxDepth = 0;
      m.clear();
        
      solve(root);
   
       for(int i=0; i<=maxDepth; i++){
           cout<<m[i]<<endl;
       } 
        
      return m[maxDepth];
        
        
    }
};


