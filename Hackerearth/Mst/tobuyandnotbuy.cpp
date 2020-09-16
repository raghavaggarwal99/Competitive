#include<bits/stdc++.h>
using namespace std;
struct node
{
	int dest;
	// int weight;
};

struct edge
{
	int src;
	int dest;
	int weight;
};

vector<node> adj[1000005];

bool visited[1000005];
int ter;

map<pair<int,int>, int> mapped;


void dfs(int n)
{
	visited[n]=true;
	for(int i=0;i<adj[n].size();++i)
	{
		if(!visited[adj[n][i].dest])
			dfs(adj[n][i].dest);
	}
}

int main()
{
	int t;
	cin>>t;

	while(t--)
	{
		mapped.clear();

		int n,m,s,te,w;
		cin>>n>>m;

		vector<edge> v;
		node e;
		edge e1;

		for(int i=0;i<m;++i)
		{
			cin>>s>>te>>w;

			e1.src=s;
			e1.dest=te;
			e1.weight=w;

			v.push_back(e1);

			mapped.insert(make_pair(make_pair(s,te),w));
			mapped.insert(make_pair(make_pair(te,s),w));
		}

		int q;
		int ans=0,que;

		cin>>q;

		que=q;

		while(q--)
		{
			memset(visited,false,sizeof(visited));

			for(int i=0;i<1000;++i)
				adj[i].clear();

			int s,w;

			cin>>s>>ter;

			w=mapped[make_pair(s,ter)];

			node n;

			for(int i=0;i<v.size();++i)
			{
				if(v[i].weight<w)
				{
					n.dest=v[i].dest;

					// n.weight=v[i].weight;

					adj[v[i].src].push_back(n);

					n.dest=v[i].src;

					adj[v[i].dest].push_back(n);
				}
			}
			
			dfs(s);

			if(!visited[ter])
				ans++;
		}
		int a=__gcd(ans,que);
		printf("%d/%d\n",ans/a,que/a);
	}
	return 0;
}
