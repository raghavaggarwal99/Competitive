/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> neighbors;
    
    Node() {
        val = 0;
        neighbors = vector<Node*>();
    }
    
    Node(int _val) {
        val = _val;
        neighbors = vector<Node*>();
    }
    
    Node(int _val, vector<Node*> _neighbors) {
        val = _val;
        neighbors = _neighbors;
    }
};
*/

class Solution {
public:
    Node* cloneGraph(Node* src) {
        
        
        
           map<Node*,Node*> my_map;
        
           queue<Node*> Q;

           Q.push(src);
        
           Node* node = new Node(src->val);

           my_map[src] = node;

           while(!Q.empty()){
               
               Node* fr = Q.front();

               Q.pop();

               vector<Node *> v = fr->neighbors;

               for(int i=0 ; i<v.size() ; i++){
                   
                   if(my_map.find(v[i]) == my_map.end()){

                       Node *temp = new Node(v[i]->val);
                       
                       my_map[v[i]] = temp;
                       Q.push(v[i]);
                   }
                   
                   my_map[fr]->neighbors.push_back(my_map[v[i]]);
               }
           }


           return my_map[src];

        
        
        
    }
};

