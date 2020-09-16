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
	    
	    unordered_map<int,int> x;
	    
	    for(int i=0; i<n; i++){
	        cin>>a[i];
	        x[a[i]]++;
	    }
	    
	    sort(a,a+n);
	    
	    
	    
	    
	    int sum=0;
	    
	    
	    for(int i=n-1; i>=0; i--){
	        
	        if(x[a[i]]>0){
	            
	            sum+=a[i];
	            
	            int v=a[i]-1;
	            
	            x[a[i]]--;
	            
	            if(x[v]>0){
	                x[v]--;
	            }
	            
	        }
	        
	        
	    }
	    
	    cout<<sum<<endl;
	    
	    
	    
	    
	}
	
	
	
	
	
	
	
	
	
	return 0;
}
