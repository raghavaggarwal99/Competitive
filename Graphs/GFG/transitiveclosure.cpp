void Graph::DFSUtil(int s, int v) 
{ 
    // Mark reachability from s to t as true. 
    tc[s][v] = true; 
  
    // Find all the vertices reachable through v 
    list<int>::iterator i; 
    for (i = adj[v].begin(); i != adj[v].end(); ++i) 
        if (tc[s][*i] == false) 
            DFSUtil(s, *i); 
} 
  
// The function to find transitive closure. It uses 
// recursive DFSUtil() 
void Graph::transitiveClosure() 
{ 
    // Call the recursive helper function to print DFS 
    // traversal starting from all vertices one by one 
    for (int i = 0; i < V; i++) 
        DFSUtil(i, i); // Every vertex is reachable from self. 
  
    for (int i=0; i<V; i++) 
    { 
        for (int j=0; j<V; j++) 
            cout << tc[i][j] << " "; 
        cout << endl; 
    } 
} 
