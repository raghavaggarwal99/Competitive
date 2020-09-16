
#include <iostream>
#include<bits/stdc++.h>

using namespace std;

int main() {

	int t;
	cin>>t;

	while(t-->0){

		int n;
		cin >> n;

		int *a=new int[n];

		int ans=0;

		for(int i=0; i<n; i++){
			cin>>a[i];
		}

		int maxx=0;

		for(int i=0; i<n; i++){
			if(a[i]>maxx){
				maxx=a[i];
				ans++;
			}
		}



		cout<<ans<<endl;
	}










}


