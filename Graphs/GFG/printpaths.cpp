#include <bits/stdc++.h> 
using namespace std; 
  
// utility function for printing 
// the found path in graph 

void printpaths(vector<int> &s){
    
    
    for(int i=0; i<s.size(); i++){
        cout<<s[i]<<" ";
    }
    
    cout<<endl;
    
    
}


int isNotVisited(int x, vector<int>& path) 
{ 
    int size = path.size(); 
    for (int i = 0; i < size; i++)  
        if (path[i] == x)  
            return 0;  
    return 1; 
} 

void findpaths( vector<vector<int> > &g, int start, int end, int V){
    
    
   queue<vector<int>> q;
   
   vector<int> path; 
   
    path.push_back(start); 
    
    q.push(path); 
    
    
    while(!q.empty()){
        
        
        path= q.front();
        
        q.pop();
        
        int last= path[path.size()-1];
        
        if(last==end){
            printpaths(path);
        }
        
        for(int i=0; i<g[last].size(); i++){
            
            if (isNotVisited(g[last][i], path)) { 
                
                vector<int> newpath(path); 
                
                // printpaths(newpath);
                
                newpath.push_back(g[last][i]); 
                
                q.push(newpath); 
            } 
            
        }
        
        
    }
    
}








// driver program 
int main() 
{ 
    vector<vector<int> > g; 
    // number of vertices 
    int v = 4; 
    g.resize(4); 
  
    // construct a graph 
    g[0].push_back(3); 
    g[0].push_back(1); 
    g[0].push_back(2); 
    g[1].push_back(3); 
    g[2].push_back(0); 
    g[2].push_back(1); 
  
    int src = 2, dst = 3; 
    cout << "path from src " << src 
         << " to dst " << dst << " are \n"; 
  
    // function for finding the paths 
    findpaths(g, src, dst, v); 
  
    return 0; 
}
