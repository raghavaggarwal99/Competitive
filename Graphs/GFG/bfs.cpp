/* You have to complete this function*/

/* Function to do BFS of graph
*  g[]: adj list of the graph
*  N : number of vertices
*/
vector <int> bfs(vector<int> g[], int N) {

    // Your code here
    
    vector<int> ans;
    
    bool *visited= new bool[N];
    
    for(int i=0; i<N; i++){
        visited[i]=false;
    }
    
    
     list<int> q; 
    
    q.push_back(0);
    visited[0]=true;
    
    while(!q.empty()){
        
        int s=q.front();
        
        ans.push_back(s);
        
        q.pop_front();
        
        for(vector <int> :: iterator it = g[s].begin(); it != g[s].end(); ++it){ 
            
            if(visited[*it]==false){
                
                visited[*it]=true;
                q.push_back(*it);
            }
        }
        
        
        
    }
    
    
    return ans;
    
    
    
    
}
