class Solution {
public:
    
    #define siz 100005
    
    vector<int>v[siz];
    bool vis[siz];

    int n,disc[siz],parent[siz],low[siz];
    stack<int>st;

    set<pair<int,int> >ans;
    set<pair<int,int> >::iterator it;
    
     vector<vector<int>> bridges;

    void dfs(int u)
    {

        static int time=1;

        int children=0;

        vis[u]=1;

        disc[u]=low[u]=time++;

        for(int i=0;i<v[u].size();i++)
        {
            int curr=v[u][i];

            if(!vis[curr])
            {
                children++;

                parent[curr]=u;

                dfs(curr);

                low[u]=min(low[u],low[curr]);

                if(low[curr]>disc[u]){
                    
                    cout<<u<<" "<<curr<<endl;
                    
                    bridges.push_back({u, curr});
                    
            

                }
            }

            else if(curr!=parent[u])
                low[u]=min(low[u],disc[curr]);
        }
    }

    
    vector<vector<int>> criticalConnections(int n, vector<vector<int>>& a) {
        


	int i;

        for(i=0;i<a.size();i++)
        {

            v[a[i][0]].push_back(a[i][1]);
            
            v[a[i][1]].push_back(a[i][0]);
        }


        for(i=0;i<=n;i++)
            if(!vis[i])
                dfs(i);

   
        
        
        return bridges;

        
        
    }
};


