#include <iostream>
using namespace std;
// int solve(string x, string y, int m, int n){
    
    
    
//     if(m==0 || n==0){
//         return 0;
//     }
    
//     if(x[m-1]==y[n-1]){
//         return 1+solve(x,y,m-1,n-1);
//     }
//     else{
//         return max(solve(x,y,m-1,n), solve(x,y,m,n-1));
//     }

    
// }

int solve(string x, string y, int m, int n){
    
    
    int L[m + 1][n + 1];  
    
    for(int i=0; i<=m; i++){
        for(int j=0; j<=n; j++){
            
            if(i==0 || j==0){
                L[i][j]=0;
            }
            else if(x[i-1]==y[j-1]){
                L[i][j]=1+L[i-1][j-1];
            }
            else{
                L[i][j]=max(L[i-1][j], L[i][j-1]);
            }
            
            
        }
    }
    
    return L[m][n];
    

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
