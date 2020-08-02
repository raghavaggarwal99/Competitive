#include <bits/stdc++.h>
using namespace std;
 
int main()
{
   
    int n;
    cin>>n;
 
int *a=new int[n+1];
int *b=new int[n+1];
 
    for(int i=0; i<n; i++){
        cin>>a[i]>>b[i];
    }
 
    int k;
    cin>>k;
 
int count=n;
 
 
 
    for(int i=0; i<n; i++){
 
        if(b[i]>=k){
             break;
        }
        else if(b[i]<k){
           
            count--;
            continue;
        }
 
 
    }
 
 
cout<<count<<endl;
 
  
}
