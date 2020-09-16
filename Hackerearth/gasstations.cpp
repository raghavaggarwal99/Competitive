
#include <iostream>
#include<bits/stdc++.h>

using namespace std;

int main() {
	

	int n,v;
	cin>>n>>v;

	int ans=0;

	int *a=new int[n];


	for(int i=0; i<n; i++){
		cin>>a[i];
		
	}


	for(int i=0; i<n; i++){

		
		v-=a[i];

		if(v<=0){
			ans++;
			break;
		}
		ans++;

	}

	cout<<ans<<endl;








}


