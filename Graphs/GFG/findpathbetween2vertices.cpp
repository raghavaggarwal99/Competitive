#include <bits/stdc++.h> 
  
using namespace std; 
  
// A directed graph using adjacency list 
// representation 
class Graph { 
  
    // No. of vertices in graph 
    int V; 
    list<int>* adj; 
  
    // A recursive function 
    // used by countPaths() 
    void countPathsUtil(int, int, int&); 
  
public: 
    // Constructor 
    Graph(int V); 
    void addEdge(int u, int v); 
    int countPaths(int s, int d); 
}; 
  
Graph::Graph(int V) 
{ 
    this->V = V; 
    adj = new list<int>[V]; 
} 
  
void Graph::addEdge(int u, int v) 
{ 
  
    // Add v to u’s list. 
    adj[u].push_back(v); 
} 
  
// Returns count of paths from 's' to 'd' 
int Graph::countPaths(int start, int dest) 
{ 
  
    // Call the recursive helper 
    // function to print all paths 
    
    int ans=0;
    
    countPathsUtil(start,dest,ans);
    
    return ans;
    
    
    
   
} 
  
// A recursive function to print all paths 
// from 'u' to 'd'. visited[] keeps track of 
// vertices in current path. path[] stores 
// actual vertices and path_index is 
// current index in path[] 
void Graph::countPathsUtil(int start, int dest, 
                           int& pathCount) 
{ 
    
    
    if(start==dest){
        pathCount++;
    }
    else{
        
        for(list<int>::iterator i=adj[start].begin(); i!=adj[start].end(); i++ ){
            
            countPathsUtil(*i,dest,pathCount);
        }
    }
    
    
   
} 
  
// Driver Code 
int main() 
{ 
  
    // Create a graph given in the above diagram 
    Graph g(5); 
    g.addEdge(0, 1); 
    g.addEdge(0, 2); 
    g.addEdge(0, 3); 
    g.addEdge(1, 3); 
    g.addEdge(2, 3); 
    g.addEdge(1, 4); 
    g.addEdge(2, 4); 
  
    int s = 0, d = 3; 
    cout << g.countPaths(s, d); 
  
    return 0; 
} 
