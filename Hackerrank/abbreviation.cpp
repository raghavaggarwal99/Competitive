#include <bits/stdc++.h>
using namespace std;

const int maxN = 1000 + 100; 


inline void solve() { 

    string a,b; 
    cin >> a >> b; 

    int n = a.length() ;
    int m = b.length(); 

    bool dp[n+1][m+1]; 

    memset( dp , 0 , sizeof dp ); 

     dp[0][0] = true; 

    for(int i=1; i<=n; i++){

        if(a[i-1] >='A' && a[i-1] <='Z'){
            dp[i][0]=false;
        }
        else{
             dp[i][0]=dp[i-1][0];
        }
    }

    for(int i=1; i<=m; i++){

        dp[0][i]=false;
        
    }

    for( int i = 1 ; i <= n ; i++ ) {

        for( int j = 1 ; j <= m ; j++ ) { 

            if(toupper(a[i-1]) == b[j-1] && dp[i-1][j-1]) 
               dp[i][j] = true; 

            else if(islower(a[i-1]) && dp[i-1][j] ) 
                dp[i][j] = true; 

        }
    }


    if( dp[n][m] ) 
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
}

int main() { 

    int t; 
    cin >> t; 

    while( t-- ) 
        solve(); 
}
