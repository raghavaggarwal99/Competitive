#include <iostream>
 
using namespace std;
 
int main()
{
   int n;
   cin>>n;
   
   int *a=new int[n-1];
   for(int i=1;i<n; i++){
       
       cin>>a[i];
       
   }
   
   int c,d;
   cin>>c>>d;
   
   //cout<<a[2]<<endl;
   //cout<<c<<d<<endl;
   
   int sum=0;
   
   for(int j=c; j<d; j++){
       
    sum+=a[j];   
       
   }
   
   cout<<sum<<endl;
   
   
   
}
