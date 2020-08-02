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
	    
    	  long long int dp[n+1]; 
          int i2 = 1, i3 = 1, i5 = 1; 
        
        
        dp[1]=1;
        
	    for(int i=2; i<=n; i++){
	        
	        dp[i]=min(dp[i2]*2, min(dp[i3]*3,dp[i5]*5));
	        
	        if(dp[i]==dp[i2]*2){
	            i2++;
	        }
	         if(dp[i]==dp[i3]*3){
	            i3++;
	        }
	         if(dp[i]==dp[i5]*5){
	            i5++;
	        }
	        
	        
	    }
	    
	    cout<<dp[n]<<endl;
	    
	}
	
	
	
	
	return 0;
}
