int Graph::findMother() 
{ 
    // visited[] is used for DFS. Initially all are 
    // initialized as not visited 
    vector <bool> visited(V, false); 
  
    // To store last finished vertex (or mother vertex) 
    int v = 0; 
  
    // Do a DFS traversal and find the last finished 
    // vertex   
    for (int i = 0; i < V; i++) 
    { 
        if (visited[i] == false) 
        { 
            DFSUtil(i, visited); 
            v = i; 
        } 
    } 
  
    // If there exist mother vertex (or vetices) in given 
    // graph, then v must be one (or one of them) 
  
    // Now check if v is actually a mother vertex (or graph 
    // has a mother vertex).  We basically check if every vertex 
    // is reachable from v or not. 
  
    // Reset all values in visited[] as false and do  
    // DFS beginning from v to check if all vertices are 
    // reachable from it or not. 
    fill(visited.begin(), visited.end(), false); 
    DFSUtil(v, visited);  
    for (int i=0; i<V; i++) 
        if (visited[i] == false) 
            return -1; 
  
    return v; 
} 
  
