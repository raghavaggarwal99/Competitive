
#include <iostream>
#include<bits/stdc++.h>

using namespace std;

int parent[1001];

int find(int a){

	if(parent[a]==-1){
		return a;
	}

	return find(parent[a]);

}

void join(int x, int y){

	int a= find(x);
	int b= find(y);

	parent[a]=b;

}


int solve(int x,int y,int z,int x1,int y1,int z1)
{
	return (x-x1)*(x-x1)+(y-y1)*(y-y1)+(z-z1)*(z-z1);
}

int main() {
	int t;
	cin >> t;

	while(t-->0){

		int n,m;
		cin>>n>>m;

		int a[n][3];

		for(int i=0; i<n; i++){
			cin>>a[i][0]>>a[i][1]>>a[i][2];
		}

		vector<pair<int,pair<int,int>>> v;

		for(int i=0; i<n-1; i++){

			for(int j=i+1; j<n; j++){
				int dist= solve(a[j][0], a[j][1], a[j][2], a[i][0], a[i][1],a[i][2]);
				v.push_back(make_pair(dist, make_pair(i,j)));
			}
		}

		sort(v.begin(), v.end());

		int count=0;

		for(int i=0; i<=1000; i++){
			parent[i]=-1;
		}
		int ind=0;

		for(int i=0;i<v.size();i++)
		{
			int a=v[i].second.first;
			int b=v[i].second.second;

			if(find(a)!=find(b))
			{
				join(a,b);
				count++;
			}
			if(count>n-m)
			{
				ind=i;
				break;
			}
		}

		cout<<v[ind].first<<endl;

		v.clear();





	}

















}


