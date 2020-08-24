int Solution::solve(string start, string end, vector<string> &dict)
{
  
   unordered_map<string, bool>vis;
    
    for(int i = 0; i < dict.size(); i++){
        vis[dict[i]] = false;
    }
    
    queue<string>q;
    
    q.push(start);
    
    vis[start] = true;
    
    unordered_map<string, int> dist;
    
    
    while(!q.empty()){
        
        string node= q.front();
        
        q.pop();
        
        
        for(int i=0; i<node.length(); i++){
            
            string temp=node;
            
            for(char ch='a'; ch<='z'; ch++){
                
                temp[i]=ch;
                
                if(vis.find(temp)!=vis.end() && !vis[temp]){
                    
                    vis[temp]=true;
                    q.push(temp);
                    
                    dist[temp]= dist[node]+1;
                    
                }
                
            }
            
        }
        
        
        
    }
    
    
    return dist[end]+1;
}


