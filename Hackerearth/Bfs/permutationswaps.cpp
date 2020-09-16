#include <iostream>
#include<bits/stdc++.h>

using namespace std;

int parent[100001];

int find(int a){

	if(parent[a]==-1){
		return a;
	}

	return find(parent[a]);
}


void union1(int x, int y){

	int a= find(x);
	int b= find(y);

	if(a!=b){
		parent[a]=b;
	}
}

int main() {
	int t;
	cin >> t;										


	while(t-->0){

		int n,m;
		cin>>n>>m;

		int *a= new int[n+1];
		int *b= new int[n+1];

		for(int i=0; i<n; i++){
			cin>>a[i];
		}

		for(int i=0; i<n; i++){
			cin>>b[i];
		}


		for(int i=0; i<=100000; i++){
			parent[i]=-1;
		}


		for(int i=0; i<m; i++){
			int d,t;

			cin>>d>>t;
			d--;
			t--;

			if(find(a[d])!=find(a[t])){
				union1(a[d],a[t]);
			}
		}

		int check=0;

		for(int i=0; i<n; i++){

			if(a[i]!=b[i]){

				if(find(a[i])!=find(b[i])){
					cout<<"NO"<<endl;
					check=1;
					break;
				}

			}
		}
		if(check==0){
			cout<<"YES"<<endl;
		}



	}











}

