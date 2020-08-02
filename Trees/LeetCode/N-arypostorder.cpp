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
      
       
        
        for (int i = 0; i < total; i++) 
            solve(node->children[i]); 
        
         ans.push_back(node->val);
 
    }
    
    
    vector<int> postorder(Node* root) {
        
          solve(root);
        
            return ans;
        
    }
};


