#include <list> 
#include <stack> 

void solve(int i, bool visited[], stack<int> &s, vector<int> adj[]){
    
    visited[i]=true;
    
    
    for(vector<int>:: iterator it=adj[i].begin(); it!=adj[i].end(); it++){
        
        if(!visited[*it]){
            solve(*it, visited, s, adj);
        }
    }
    
    
    s.push(i);
    
    
}



vector<int> topoSort(int V, vector<int> adj[]) {
    // Your code here
    
    stack<int> s;
    vector<int> ans;
    
    bool* visited= new bool[V];
    
    for(int i=0; i<V; i++){
        visited[i]=false;
    }
    
    for(int i=0; i<V; i++){
        if(!visited[i]){
            solve(i, visited, s, adj);
        }
    }
    
    
    while(!s.empty()){
        
        ans.push_back(s.top());
        // cout<<s.top();
        s.pop();
    }
    
    
    return ans;
    
    
}

