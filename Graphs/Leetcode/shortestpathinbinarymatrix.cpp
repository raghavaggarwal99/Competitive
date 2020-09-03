class Solution {
    
    const int i1[8]={-1,-1,-1,0,1,1,1,0};
    const int j1[8]={-1,0,1,1,1,0,-1,-1};
    
public:
    
    int shortestPathBinaryMatrix(vector<vector<int>>& g) 
    {
        if(g[0][0]==1)
            return -1;
        
        return bfs(g);
    }
    
    int bfs(vector<vector<int>>& g)
    {
        queue<pair<pair<int,int>,int>>q;
        
        int n=g.size();
        
        vector<vector<bool>>vis(g.size(),vector<bool>(g.size(),false));
        
        
        q.push(make_pair(make_pair(0,0),1));
        
        
        vis[0][0]=1;
        
        
        while(!q.empty())
        {
            pair<pair<int,int>,int>p=q.front();
            
            
            int i=p.first.first;
            
            int j=p.first.second;
            
            int val=p.second;
            
            if(i==n-1 && j==n-1)
                return val;
            
            for(int k=0;k<8;k++)
            {
                int x=i+i1[k];
                int y=j+j1[k];
                if(x>=0 && y>=0 && x<n && y<n && !vis[x][y] && g[x][y]==0){
                    q.push(make_pair(make_pair(x,y),val+1));
                    vis[x][y]=1;
                }
            }
            
            q.pop();
        }
        
        
        if(q.empty())
            return -1;
        return -1;
    }
};
