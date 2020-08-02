#include <bits/stdc++.h> 
#include<string.h>
using namespace std; 


int main(){
  
  long long int n,k;
    cin>>n>>k;
    
    unordered_map<int,int> x;
    
    long long int *a=new long long int[n];
    
    for(int i=0; i<n; i++){
        cin>>a[i];
        x[a[i]]++;
    }
    
   sort(a,a+n);
    
    int max=-1;
    int count=0;
    
   for(int i=0; i<n; i++){
       if(x[a[i]]+count>k){
          break;
       }
       else{
           count++;
           x[a[i]]--;
           max=a[i];
       }
       if(count==k){
           break;
       }
    }
    if(k==0){
        if(a[0]==1){
             cout<<"-1"<<endl;
        }
        else{
            cout<<"1"<<endl;
        }
        return 0;
    }
    
    if(count!=k){
        cout<<"-1"<<endl;
    }
    else{
        cout<<max<<endl;
    }
    
    
    
}
    

