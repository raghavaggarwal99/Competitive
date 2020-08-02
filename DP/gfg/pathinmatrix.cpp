using namespace std;
#include<bits/stdc++.h>

int main() {
	int t;
	cin >>t;
	while(t--)
	{
	    int n;
	    cin >> n;
	    int M[n][n];
	    for(int i = 0;i<n;i++)
	    {
	        for(int j=0;j<n;j++)
	        {
	            cin >> M[i][j];
	        }
	    }
	    
    int A[n][n];
    for(int i = 0;i<n;i++)
    {
        A[n-1][i]=M[n-1][i];
    }
    for(int i = n-2;i>=0;i--)
    {
        for(int j=0;j<n;j++)
        {
            if(j==0)
            {
                A[i][j]=max(A[i+1][j],A[i+1][j+1])+M[i][j];
            }
            else if(j==n-1)
            {
                A[i][j]=max(A[i+1][j],A[i+1][j-1])+M[i][j];
            }
            else
            {
               A[i][j]=max(A[i+1][j+1],max(A[i+1][j],A[i+1][j-1]))+M[i][j];  
            }
        }
    }
    int maxx=INT_MIN;
    for(int i =  0;i<n;i++)
    {
         if(maxx<A[0][i])
            maxx = A[0][i];
    	
	}
	cout << maxx << endl;
}
	
	return 0;
}
