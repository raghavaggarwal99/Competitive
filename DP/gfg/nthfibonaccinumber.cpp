#include <iostream>
using namespace std;

int min(int a, int b){
    if(a<b){
        return a;
    }
    
    return b;
}

int main() {
	//code
	int t;
	cin>>t;
	
	for(int k=0; k<t; k++){
	    int n;
	    cin>>n;
	    
    	  long long int* dp=new long long int[n+2]; 
          
        
        dp[0]=0;
        dp[1]=1;
        
	    for(int i=2; i<=n; i++){
	        
	       dp[i]=(dp[i-1]%1000000007+dp[i-2]%1000000007)%1000000007;
	        
	    }
	    
	    cout<<dp[n]%1000000007<<endl;
	    
	}
	
	
	
	
	return 0;
}
