#include <iostream>
#include<bits/stdc++.h>

using namespace std;

int parent[1000 + 10];

int rnk[1000 + 10];

vector < pair<int,int> > adj[1000 + 10];

int org;

int edges[1000 + 10][1000 + 10];


bool vis[1000+10];

struct node{
	int src;
	int dest;
	int weight;

};

int find(int a){
	if(parent[a]==-1){
		return a;
	}

	return find(parent[a]);
}

void merge(int x, int y){

	int a= find(x);
	int b= find(y);

	if(rnk[x]<rnk[y]){
		parent[x]=y;
	}
	else if(rnk[x]>rnk[y]){
		parent[y]=x;
	}
	else{
		parent[y]=x;
		rnk[x]++;
	}

}

bool compare(node n1, node n2)
{
	return n1.weight<n2.weight;
}

void dfs(int start, int line){

	edges[org][start]=line;
	
	vis[start]=true;

	for(int i=0; i<adj[start].size(); i++){

		if(!vis[adj[start][i].first]){
			dfs(adj[start][i].first, line+ adj[start][i].second);
		}

	}

}




void kruskal(vector<node> v, int n){

	vector<node> ans;

	sort(v.begin(), v.end(), compare);

	// int count=0;
	// int i=0;


	for(int i=0; i<v.size(); i++){

		node temp= v[i];

		int a= find(temp.src);
		int b= find(temp.dest);

		if(a!=b){
			ans.push_back(temp);

			adj[temp.src].push_back(make_pair(temp.dest, temp.weight));
			adj[temp.dest].push_back(make_pair(temp.src, temp.weight));

			merge(a, b);
			// count++;

		}
	}

	// for(int i=0; i<ans.size(); i++){

	// 	// cout<<ans[i].src<<" "<<ans[i].dest<<" "<<ans[i].weight<<endl;

	// 	adj[ans[i].src].push_back(make_pair(ans[i].dest, ans[i].weight));

	// 	adj[ans[i].dest].push_back(make_pair(ans[i].src, ans[i].weight));
	// }


}



int main() {


	int t;
	cin>>t;

	int cases=1;

	while(t-->0){

		int V,m, q;

		cin>>V>>m>>q;

		vector<node> v;
		
		node n;

		memset(edges, 0 , sizeof edges);

		for(int i=0; i<=V+1; i++){
			adj[i].clear();
		}

		for(int i=0; i<=V+1; i++){
			parent[i]=-1;
			rnk[i]=0;
		}


		for(int i=0; i<m; i++){

			cin>>n.src>>n.dest>>n.weight;

			v.push_back(n);

		}
		
		kruskal(v, V);

		for(int i = 1; i <= V; i++){    

            memset(vis, false, sizeof vis);
            org = i;
            dfs(i , 0);
        }


		// for(int i = 1; i <= V; i++){    

        //    for(int j=1; j<=V; j++){
		// 	   cout<<edges[i][j]<<" ";
		//    }
		//    cout<<endl;
        // }

		cout<<"Case: "<<cases<<endl;

		for(int i=0; i<q; i++){

			int first, end;
			
			cin>>first>>end;

			cout<<edges[first][end]<<endl;

		}

		cases++;


	}


}

