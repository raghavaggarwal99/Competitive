#include <iostream>
 
using namespace std;
 
int main()
{
   long long int n;
   cin>>n;
   long long int count=0;
   int a[5]={100,20,10,5,1};
  
    for(int i=0; i<5; i++){ 
        
        
        
     long long int rem=n%a[i];
    
     long long int quotient=n/a[i];
     
     count+=quotient;
     n=rem;
     
     if(rem==0){
         break;
     }
     
    }
   cout<<count<<endl;
  
}
