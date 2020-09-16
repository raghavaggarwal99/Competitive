#include<bits/stdc++.h>
 
#define    ll           long long
#define    db1(x)       cout<<#x<<"="<<x<<'\n'
#define    db2(x,y)     cout<<#x<<"="<<x<<","<<#y<<"="<<y<<'\n'
#define    db3(x,y,z)   cout<<#x<<"="<<x<<","<<#y<<"="<<y<<","<<#z<<"="<<z<<'\n'
 
using namespace std;
 
const int m = 1e6+1;
const int INF = 1e9;
 
int k, vertex, edges, u, v, ti, cost;
int source, distanation;
vector<vector<pair<pair<int,int> ,int>>> adj(m);
 
vector<int> dist(m,INF);
vector<bool> vis(m,0);
vector<int> shor(m,0);

int c = 0;

void printPath(int j)
{
    if (shor[j] == - 1)
        return;

    printPath(shor[j]);

    if(j!=distanation){
            cout << j << "->";
    }
    else if(j==distanation) cout << j;
    c++;
}

void dijkastra()
{
        shor.assign(m,0);

        dist[source] = 0;
        
        priority_queue< pair<int,int>, vector <pair<int,int>> , greater<pair<int,int>> > pq; 
        pq.push(make_pair(0, source));

        // s.insert({0,source});
        shor[source] = -1;

        while(!pq.empty())
        {
                pair<int,int> p = pq.top();
                int node = p.second;
                int dis =  p.first;
                pq.pop();
 
                if(vis[node]){
                        continue;
                }

                vis[node]= 1;
 
                for(auto u : adj[node])
                {
                        int v = u.first.first;
                        int w = u.first.second;
                        int t = u.second;

                        if((dist[node] + w + t*k + ((v==distanation || v==source)?0:k)) < dist[v])
                        {
                                dist[v] = (dist[node] + w + t*k + ((v==distanation || v==source)?0:k));
                                // s.insert({dist[v], v});
                                pq.push(make_pair(dist[v], v));
                                shor[v] = node;
                        }
 
                }
        }
}

int main()
{

    cin >> k;
        cin >> vertex >> edges;
        for(int i=0; i < edges; i++)
        {
                cin >> u >> v >> ti >> cost;
                adj[u].push_back({{v,cost},ti});
                adj[v].push_back({{u,cost},ti});
        }
		
        cin >> source >> distanation;
       
        dijkastra();
       
                if(dist[distanation]==INF || ((vertex*(vertex-1))/2) < edges) cout << "Error" << endl;
 
        else
        {
                cout << source << "->";
                printPath(distanation);
                cout << " " << c+1 << " " << dist[distanation] << endl;
        }
}
