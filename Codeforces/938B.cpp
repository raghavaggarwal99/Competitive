#include <bits/stdc++.h> 
#include<string.h>
using namespace std; 

int main(){
  
   int n;
    cin>>n;
    
    int *a=new int[n+1];
    for(int i=1; i<=n; i++){
        cin>>a[i];
    }
    
    int c=1;
    int v=1000000;
    // long long int sum=0;
    int max=0;
    
    for(int i=1; i<=n; i++){
        if(a[i]-c<abs(v-a[i])){
              if(a[i]-c>max){
                  max=a[i]-c;
              }
        }
        else{
            if(abs(a[i]-v)>max){
                max=abs(a[i]-v);
            }
        }
    }
    
   cout<<max<<endl;
    
    
}
