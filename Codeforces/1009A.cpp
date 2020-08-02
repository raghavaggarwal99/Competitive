#include <iostream>
using namespace std;
int main()
{
   
   long long int n,k,m;
   cin>>n>>m;
    
   int *a=new int[n];
    int *b=new int[m];
   
  for(int i=0; i<n; i++){
      cin>>a[i];
  }
    
    for(int i=0; i<m; i++){
      cin>>b[i];
  }
    
    
    long long int count=0;
    long long int j=0; 
    for(int i=0; i<n; i++){
        if(b[j]>=a[i]){
            j++;
            count++;
            //cout<<j<<endl;
        }
        if(count==m){
            break;
        }
            
        
    }
     cout<<count<<endl;
    
}
