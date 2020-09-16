#include<bits/stdc++.h>
#include<iostream>
#define ll	long long int

using namespace std;

int par[105];
int rnk[105];

struct node
{
	int src,dest;
	ll wght;
};

int Find(int i)
{
	if(par[i]!=i)
		return Find(par[i]);

	return par[i];
}

void Union(int nd1, int nd2)
{
	int x=Find(nd1);
	int y=Find(nd2);
	 
	if(rnk[x]<rnk[y])
		par[x]=y;

	else if(rnk[x]>rnk[y])
		par[y]=x;
	else
	{
		par[y]=x;
		rnk[x]++;
	}
}

bool compare(node n1, node n2)
{
	return n1.wght<n2.wght;
}

ll kruskal(vector<node> g, int n)
{
	vector<node> mst;

	for(int i=0;i<n;++i)
	{
		par[i]=i;
		rnk[i]=0;
	}
	sort(g.begin(),g.end(),compare);

	int cnt=0,cnt1=0;
	ll ans=0;

	while(cnt!=n-1)
	{
		node ne=g[cnt1++];
		int x=Find(ne.src);
		int y=Find(ne.dest);

		if(x!=y)
		{
			ans+=ne.wght;
			mst.push_back(ne);
			Union(x,y);
			cnt++;
		}
	}

	return ans;
}


ll dis[105][105];

void floydWarshell(vector<node> g, int n)
{
	for(int i=0;i<g.size();++i)
	{
		dis[g[i].src][g[i].dest]=g[i].wght;
		dis[g[i].dest][g[i].src]=g[i].wght;
	}

	for(int k=0;k<n;++k)
	{
		for(int i=0;i<n;++i)
		{
			for(int j=0;j<n;++j)
			{
				if(dis[i][k]+dis[k][j]<dis[i][j])
					dis[i][j]=dis[i][k]+dis[k][j];
			}
		}
	}

}
int main()
{
	int t;

	cin>>t;

	while(t--)
	{
		int n,m,k;
		cin>>n>>m>>k;

		vector<node> graph;

		node nd;

		for(int i=0;i<m;++i)
		{
			cin>>nd.src>>nd.dest>>nd.wght;

			nd.src--;
			nd.dest--;
			graph.push_back(nd);

		}

		for(int i=0;i<n;++i){
			for(int j=0;j<n;++j){
				dis[i][j]=1000000000000000LL;
			}
		}


		for(int i=0;i<n;++i){
			dis[i][i]=0;
		}

		floydWarshell(graph,n);

		graph.clear();

		for(int i=0;i<k;++i)
		{
			for(int j=i+1;j<k;++j)
			{
				nd.src=i;
				nd.dest=j;
				nd.wght=dis[i][j];
				graph.push_back(nd);
			}
		}

		cout<<kruskal(graph,k)<<endl;
	}
	return 0;
}
