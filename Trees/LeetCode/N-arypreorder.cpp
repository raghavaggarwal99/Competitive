/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> children;

    Node() {}

    Node(int _val) {
        val = _val;
    }

    Node(int _val, vector<Node*> _children) {
        val = _val;
        children = _children;
    }
};
*/

class Solution {
public:
    
    vector<int> ans;
    
    void solve(Node* node){
        
        
            if (node == NULL) 
            return; 
  
    
        int total = node->children.size(); 
            cout<<total<<endl;
      
        ans.push_back(node->val);
        
        for (int i = 0; i < total; i++) 
            solve(node->children[i]); 
  
        // Print the current node's data 
        cout<< node->val << " "; 
       
            
    // // Last child 
    // inorder(node->children[total - 1]); 
        
        
        
    }
    
    vector<int> preorder(Node* root) {
        
     
        solve(root);
        
        return ans;
        
        
    }
};
