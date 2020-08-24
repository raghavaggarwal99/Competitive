  bool isCyclic(int v, vector<bool> &visited, vector<bool> &recStack, vector<int> adj[]) {
    
    
        if(visited[v]==false) {

            visited[v] = true;
            recStack[v] = true;

            for(auto a: adj[v]) {
                if(!visited[a] && isCyclic(a, visited, recStack, adj))
                    return true;
                else if(recStack[a])
                    return true;
            }
        }


        recStack[v] = false;
        return false;
    }

    
    
    bool canFinish(int A, vector<vector<int>>& B) {
        
        
    int V = A;
    int E = B.size();
    
    vector<int> adj [V];
        
    vector<bool> visited(A, false);
        
    vector<bool> recStack(A, false);
    
    for(int i=0;i<E;i++)
        adj[B[i][0]].push_back(B[i][1]);
    
    for(int i=0;i<V;i++)
        if(isCyclic(i, visited, recStack, adj))
            return 0;
            
            
    return 1;
        
        
        
        
        
        
    }
};
