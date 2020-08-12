/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
 
void solve1(TreeNode* A, int h,   map<int, vector<int>> &m) {
    
    if(A==NULL){
        return;
    }
    
    m[h].push_back(A->val);
    
    solve1(A->left, h+1, m);
    solve1(A->right, h, m);
    
    
}


vector<int> Solution::solve(TreeNode* A) {
    
    
    
    map<int, vector<int>> m;
    
    solve1(A, 0, m);
    
    
    map< int,vector<int> > :: iterator it; 
    
    vector<int> v;
    
    // vector<vector<int>> v;
    
    for (it=m.begin(); it!=m.end(); it++) 
    { 
        // cout<<it->first<<endl;
        for (int i=0; i<it->second.size(); ++i){
            // cout << it->second[i] << " "; 
            v.push_back(it->second[i]);
        }     
        // q++;
        // v.push_back(it->second);
        // cout << endl; 
    } 
    
    
    return v;
    
    
    
    
    
    
    
}

