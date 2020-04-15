#include <bits/stdc++.h> 
using namespace std; 

int main(){
   long long int t;
    cin>>t;
    
  for(int k=0; k<t; k++){
      long long int n;
      
      cin>>n;
      
      int *a=new int[n];
      
      for(int j=0; j<n; j++){
          cin>>a[j];
      }
      // sort(a,a+n);
      vector<int> ans;
      
      unordered_map<int,int> x;
      int count1=0;
      int count2=0;
      int maxx=0;
      
      for(int i=0; i<n; i++){
          if(x[a[i]]==0){
              count1++;
              x[a[i]]=1;
          
              // ans.push_back(a[i]);
          }
          else{
                x[a[i]]++;
                count2=max(count2,x[a[i]]);
              
          }
      }
        // cout<<count2<<" "<<count1<<endl;
        if(n==1){
            cout<<"0"<<endl;
        }
        else if(count2==0){
            cout<<"1"<<endl;
        }
        else if(count2>count1){
              cout<<count1<<endl;
          }
          else if(count2==count1){
              cout<<count1-1<<endl;
          }
          else if(count1>count2){
              cout<<count2<<endl;
          }
      
      
      
     
      
      
      
      
  }
    
    
    
}
