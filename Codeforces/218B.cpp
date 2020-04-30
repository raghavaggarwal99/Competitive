#include <bits/stdc++.h> 
#include<string.h>
using namespace std; 

int main(){
  
   int n,m;
    cin>>n>>m;
    
    int *a=new int[m];
    priority_queue<int> pq;
     priority_queue<int, vector<int>, greater<int>> minn;
    for(int i=0; i<m; i++){
        cin>>a[i];
        pq.push(a[i]);
        minn.push(a[i]);
    }
   
    long long int sum=0;
    
    for(int i=0; i<n; i++){
      
        int v=pq.top();
        sum+=v;
        pq.pop();
        pq.push(v-1);
    }
    
    long long int sum2=0;
    
     for(int i=0; i<n; i++){
      
        int v=minn.top();
        sum2+=v;
        minn.pop();
        v=v-1;
         if(v!=0){
            minn.push(v);
         }
             
    }
    
   
    
    cout<<sum<<" "<<sum2<<endl;
   
    
    
    
}
