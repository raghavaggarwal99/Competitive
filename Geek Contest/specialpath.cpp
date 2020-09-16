#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {
	//code
	int t;
	cin>>t;
	
	for(int w=0; w<t; w++){
	    
	    int n;
	    cin>>n;
	    
	    int *a=new int[n];
	    cin>>a[0];
	     a[0]=abs(a[0]);
	    int maxx1= a[0];
	    
	    int ans=a[0];
	    
	    for(int i=1; i<n; i++){
	        
	        cin>>a[i];
	        
	        a[i]=abs(a[i]);
	       
	       if(a[i]>maxx1){
    	       ans+=a[i];
	       }
	       maxx1=a[i];

	        
	    }
	    
	    cout<<ans<<endl;

	}
	
	
	return 0;
}
