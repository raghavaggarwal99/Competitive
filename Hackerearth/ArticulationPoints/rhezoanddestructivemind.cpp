#include<bits/stdc++.h>
using namespace std;
set<int> art;

const int MAXN = 1e2+5;
vector< int > adj[MAXN];
int low[MAXN],disc[MAXN];

int tme=0;

bool vis[MAXN];

void DFS(int s, int par=-1) {

	vis[s]=true;

	++tme;

	int children =0;

	low[s]=disc[s]=tme;

	for(int i=0;i<(int)adj[s].size();i++) {

		int to=adj[s][i];

		if(to==par){
			continue;
		}

		if(!vis[to]) {

			++children;

			DFS(to,s);

			low[s]=min(low[s],low[to]);

			if(par==-1 and children>1){
				art.insert(s);
			}

			if(par!=-1 and low[to]>=disc[s]){
				art.insert(s);
			}
		}

		else low[s]=min(low[s],disc[to]);
	}

}


int main() {
	
	int n,m;
	cin>>n>>m;

	for(int i=1;i<=m;i++) {
		int x,y;

		scanf("%d%d",&x,&y);
		adj[x].push_back(y);
		adj[y].push_back(x);
	}


	for(int i=1;i<=n;i++){
		if(!vis[i]) DFS(i);
	}


	int q;
	cin>>q;

	while(q--) {
		int x;
		scanf("%d",&x);
		if(art.find(x)!=art.end()){
			printf("Satisfied %d\n",(int)adj[x].size());
		}
		else printf("Not Satisfied\n");
	}
	
	return 0;
}
