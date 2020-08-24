int Solution::solve(int A, vector<vector<int> > &B) {
    
    
    vector<vector<int>> adj(A+1);
    
  
    for(int i=0; i<B.size(); i++){
        adj[B[i][0]].push_back(B[i][1]);
    }
    
   bool *visited = new bool[A]; 
   
    for(int i = 0; i < A; i++) 
        visited[i] = false; 
  

    queue<int> queue; 
  

    visited[1] = true; 
    queue.push(1); 
  

    while(!queue.empty()) 
    { 
        // Dequeue a vertex from queue and print it 
        int s = queue.front(); 
        // cout << s << " "; 
        
        queue.pop(); 
  
        
        for (int i = 0; i < adj[s].size(); ++i) 
        { 
            int temp= adj[s][i];
            
            if(temp==A){
                return true;
            }
            
            if (!visited[temp]) 
            { 
                visited[temp] = true; 
                queue.push(temp); 
            } 
        } 
    } 
    
    
    return false;
    
    
    
    
}

