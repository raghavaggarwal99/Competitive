#include<bits/stdc++.h>
#include <iostream>
# define INF 0x3f3f3f3f 

using namespace std;

unordered_map<int,int> r;

unordered_map<int,int> boozevalue;
int ans;


void solve(int source, int V, vector<pair<int,int>> adj[]){


	priority_queue< pair<int,int>, vector <pair<int,int>> , greater<pair<int,int>> > pq; 

	vector<int> dist(V+1, INT_MAX); 


    pq.push(make_pair(0, source)); 

    dist[source] = 0; 

	while(!pq.empty()){


		// int u=pq.top().first;
		int u= pq.top().second;

		pq.pop();

		for(int i=0; i<adj[u].size(); i++){

			int v = (adj[u][i]).first; 
			
            int weight = (adj[u][i]).second; 
  

            if (dist[v] > dist[u] + weight) 
            { 
                // Updating distance of v 
                dist[v] = dist[u] + weight; 
                pq.push(make_pair(dist[v], v)); 
            } 


		}

	}

	for (int i = 1; i <= V; ++i){
		cout<<dist[i]<<endl;
	}



}



int main() {
	int n,m;

	cin >> n>>m;	


	vector<pair<int,int>> adj[n+1];

	for(int i=0; i<m; i++){

		int a,b,c;
		cin>>a>>b>>c;

		adj[a].push_back(make_pair(b,c));

		adj[b].push_back(make_pair(a,c));

	}

	int q;
	cin>>q;

	int *booze= new int[q+1];

	for(int i=0; i<q; i++){

		cin>>booze[i];

		adj[0].push_back(make_pair(booze[i],0));

		adj[booze[i]].push_back(make_pair(0,0));

		// boozevalue[booze[i]]=1;
	}

	solve(0, n, adj);




}


