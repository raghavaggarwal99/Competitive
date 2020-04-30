#include <iostream>
using namespace std;

int solve( int arr[], int n )  
{  
    int lis[n]; 
   
    lis[0] = 1;    
  
    /* Compute optimized LIS values in bottom up manner */
    for (int i = 1; i < n; i++ )  
    { 
        lis[i] = 1; 
        for (int j = 0; j < i; j++ )  {
            if ( arr[i] > arr[j] && lis[i] < lis[j] + 1)  
                lis[i] = lis[j] + 1;  
        }
    } 
  
    // Return maximum value in lis[] 
    int ans=1;
    
    for(int i=0; i<n; i++){
        ans=max(ans,lis[i]);
    }
    return ans;
}  
    
/* Driver program to test above function */
int main()  
{  
    int t;
    cin>>t;
    
    for(int k=0; k<t; k++){
        int n;
        cin>>n;
        
        int *a=new int[n];
        
        for(int j=0; j<n; j++){
            cin>>a[j];
        }
        
        cout<<solve(a,n)<<endl;
    }
 
    
}
