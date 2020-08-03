bool check(int V, bool visited[], bool b[], vector<int> adj[]){
    
    if(visited[V]==false){
        
        visited[V]=true;
        
        b[V]=true;
        
        for(vector<int> :: iterator it=adj[V].begin(); it!=adj[V].end(); it++){
            
            if(!visited[*it] && check(*it, visited, b,adj)){
                return true;
            }
            else if(b[*it]==true){
                return true;
            }
        }
        
    }
    
    b[V]=false;
    return false;
    
}


bool isCyclic(int V, vector<int> adj[])
{
    // Your code here
    
    bool *visited=new bool[V];
    
    bool *b=new bool[V];
    
    for(int i=0; i<V; i++){
        visited[i]=false;
        b[i]=false;
    }
    
    
    for(int i=0; i<V; i++){
        if(check(i,visited,b, adj)){
            return true;
        }
    }
    
    
    return false;
    
    
    
    
}
