#include <iostream>
using namespace std;

// int solve(string x, string y, int m, int n){
    
    
//     if(m==0) {
//         return m;
//     }
    
//     if(n==0){
//         return n;
//     }
    
//     if(x[m-1]==y[n-1]){
//         return solve(x,y,m-1,n-1);
//     }
//     else{
//         return 1+min(solve(x,y,m-1,n), min(solve(x,y,m,n-1), solve(x,y,m-1,n-1)));
//     }

    
// }

int solve(string x, string y, int m, int n){
    
    
    int dp[m + 1][n + 1]; 
  
  
    for (int i = 0; i <= m; i++) { 
        for (int j = 0; j <= n; j++) { 
            // If first string is empty, only option is to 
            // insert all characters of second string 
            if (i == 0) 
                dp[i][j] = j; // Min. operations = j 
  
            // If second string is empty, only option is to 
            // remove all characters of second string 
            else if (j == 0) 
                dp[i][j] = i; // Min. operations = i 
  
            // If last characters are same, ignore last char 
            // and recur for remaining string 
            else if (x[i - 1] == y[j - 1]) 
                dp[i][j] = dp[i - 1][j - 1]; 
  
            // If the last character is different, consider all 
            // possibilities and find the minimum 
            else
                dp[i][j] = 1 + min(dp[i][j - 1], // Insert 
                                   min(dp[i - 1][j], // Remove 
                                   dp[i - 1][j - 1])); // Replace 
        } 
    } 
  
    return dp[m][n]; 

}


int main() {
	//code
	int t;
	cin>>t;
	
	for(int i=0; i<t; i++){
	    int m,n;
	    cin>>m>>n;
	    
	    string x,y;
	    cin>>x>>y;
	    
	    cout<<solve(x,y,m,n)<<endl;
	    
	}
	
	
	
	return 0;
}
