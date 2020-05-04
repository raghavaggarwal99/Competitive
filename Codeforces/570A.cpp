#include <bits/stdc++.h> 
#include<string.h>
using namespace std; 


int main(){
  
  long long int n,m;
    cin>>n>>m;
    
    
    int **a=new int*[m];
    for(int i=0; i<m; i++){
        a[i]=new int[n];
    }
    
    
   long long int max=INT_MIN;
    long long int index=INT_MAX;
    
    
    vector<int> indexstore;
    vector<int> votes;
    
    
  for(int i=0; i<m; i++){
     for(int j=0; j<n; j++){
         cin>>a[i][j];
         if(a[i][j]>max){
             max=a[i][j];
             index=j;
         }
     }
     indexstore.push_back(index+1);
     votes.push_back(max);
     max=INT_MIN;
    index=INT_MAX;
      
  }
    unordered_map<int,int> x;
    
    vector<int> unique;
    int ans=0;
    int check=0;
    
    for(int i=0; i<indexstore.size(); i++){
        
        if(x[indexstore[i]]==0){
            x[indexstore[i]]++;
            unique.push_back(indexstore[i]);
        }
        else{
            x[indexstore[i]]++;
        }
        
    }
    
    for(int i=0; i<unique.size(); i++){
        if(x[unique[i]]>check){
            check=x[unique[i]];
            ans=unique[i];
        }
         if(x[unique[i]]==check && unique[i]<ans){
           ans=unique[i];
             check=x[unique[i]];
        }
    }
    
    
    cout<<ans<<endl;
    
}
    

