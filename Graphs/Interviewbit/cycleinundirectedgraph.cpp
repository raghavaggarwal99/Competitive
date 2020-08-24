bool dfs(int x, vector<bool>  &color, vector<vector<int>> &adj, int parent){

    color[x]=1;
    
    
    for(int i=0; i<adj[x].size(); i++){
        
        int v=adj[x][i];
        
        if(color[v]==0){
            
            if(dfs(v,color, adj, x)){
                return true;
            }
        }
        else if(v!=parent){
            return true;
        }
        
    }
    
    return false;




}


int Solution::solve(int A, vector<vector<int> > &B) {
    
    int E = B.size();
    
    vector<vector<int> > Graph(A+1);
    
    vector<bool> visited(A+1,false);
    
    for(int i=0;i<E;i++)
    {
        Graph[B[i][0]].push_back(B[i][1]);
        Graph[B[i][1]].push_back(B[i][0]);    
    }
    
    for(int i=1;i<=E;i++)
    {
        
        if(visited[i]==false){
            if(dfs(i, visited, Graph, -1)){
                return true;
            }
            
        }
 
    }
   

    
    return false;
    
    
    
    
}

