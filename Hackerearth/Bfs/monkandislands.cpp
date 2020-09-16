
#include <bits/stdc++.h>

using namespace std;

bool visited[10002];

int level[100002];

int ans=0;

int bfs(int root, vector<int> v[], int n){

   queue<pair<int,int>> q;

	q.push(make_pair(root, 0));

	visited[root]=true;

	while(!q.empty()){

		pair<int,int> temp= q.front();
		q.pop();

		if(temp.first==n){
			return temp.second;
		}

		for(int i=0; i<(int)v[temp.first].size(); i++){

			int c= v[temp.first][i];

			if(!visited[c]){
				q.push(make_pair(c, temp.second+1));
				visited[c]=true;
			}

		}
	}


	return -1;





}

int main(){

    int t;

    cin>>t;

    while(t>0){

        memset(visited,0,sizeof(visited));

        ans=0;

        int n,m;


        cin>>n>>m;

        vector<int> v[n+1];

        
        for(int i=0;i<m;i++){

            int a,b;

            cin>>a>>b;

            // if(i==0)root = a;

            v[a].push_back(b);

            v[b].push_back(a);

        }

        cout<<bfs(1,v,n)<<endl;
		t--;

    }

}
