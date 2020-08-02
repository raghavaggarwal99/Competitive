#include <iostream>
 
using namespace std;
 
int main()
{
  long long int n,x;
  cin>>n;
  
  long long int size=n;
 
  if(n>1000000){
      x=n/1000;
  }
  else{
      x=n;
  }
  
  int *a=new int[x];
  
  for(long long int i=0; i<x; i++){
      a[i]=1;
  }
  int j=0;
  int ans=0;
  
  while(1){
      
    if(size==2 || size==1){
        break;
    }
      
    if(size%2==0){
        
        
        
        while(2){
            
            if(a[j]==size-1){
               
            j++;
            size--;
            
            break;
        }
        
        a[j]++;
        size--;
        
        
        
        }
        
    } 
    
    else{
         while(2){
             
             if(a[j]==size){
               
            j++;
            size--;
            
            
            break;
        }
        
        a[j]++;
        size--;
        
        
        
        }
        
    }
    
      
      
  }
  cout<<j+size<<endl;
   
 
}
