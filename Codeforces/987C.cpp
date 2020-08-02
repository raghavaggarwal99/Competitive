#include<iostream>
#include<bits/stdc++.h>
#include<unordered_map>
#include<climits>
#include<string.h>
using namespace std;
 
 
int main(){
   
   long n;
    cin>>n;
 
    vector<int> v[n];
    int *a=new int[n];
    int *b=new int[n];
    
 
    for(int i=0; i<n; i++){
        cin>>a[i];
 
    }
    for(int i=0; i<n; i++){
        cin>>b[i];
    }
   
    for(int i=0; i<n; i++){
        
        for(int j=i+1; j<n; j++){
            if(a[i]<a[j])
                v[i].push_back(b[j]);
            
        }
        
    }
    
    
    int min=INT_MAX;
    //cout<<min<<endl;
    for(int i=0; i<n; i++)
        sort(v[i].begin(), v[i].end());
    
    //cout<<v[0][0]<<endl;
    
    //long l=b[0]+b[1]+v[1][0];
    //cout<<v[n-1][0];
    
    //cout<<l<<endl;
    
    for(int i=0; i<n; i++){
        
        for(int j=i+1; j<n; j++){
            if(a[i]<a[j] && v[j].size()){
            if((b[i]+b[j]+v[j][0])< min){
                min=b[i]+b[j]+v[j][0];
            }
        }
        }
        
    }
    if(min==INT_MAX){
        cout<<-1<<endl;
        return 0;
}
    cout<<min<<endl;
    return 0;
    
}
