#include <iostream>
#include<unordered_map>
using namespace std;
 
int max(int a, int b){
    if(a>b)
        return a;
    return b;
}
 
int main()
{
   
   long long int n;
   cin>>n;
   
   int *a=new int[n+1];
   int *b=new int[n+1];
    int *c=new int[n+1];
   for(int i=0; i<n; i++){
       
       cin>>a[i];
       b[i]=0;
        c[i]=0;
   }
   b[n]=0;
   c[n]=0;
   
   
 // unordered_map<int,int> x;
   
   int x1=0;
   int x2=0;
   int j=0;
    int k=0;
   for(int i=0; i<n; i++){
       
       if(a[i]==0){
           b[j]++;
           x1=0;
       }
       if(a[i]==1){
           if(x1==0){
               j++;
               x1=1;
           }
           continue;
       }
      
       
   }
   
     for(int i=0; i<n; i++){
           if(a[i]==1){
           c[k]++;
           x2=0;
       }
       if(a[i]==0){
           if(x2==0){
               k++;
               x2=1;
           }
           continue;
       }
         
         
     }
    
   
    
   //cout<<j<<endl;
  int p=max(b[0], c[0]);
   int g=max(j,k);
    for(int i=0; i<=g; i++){
       
         if(b[i]!=0 && b[i]!=p){
            cout<<"NO"<<endl;
            return 0;
        }
         if(c[i]!=p && c[i]!=0){
            cout<<"NO"<<endl;
            return 0;
        }
        
    }
    cout<<"YES"<<endl;
    
   
}
