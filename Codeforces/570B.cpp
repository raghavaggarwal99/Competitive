#include<bits/stdc++.h>
#include<vector>
using namespace std;
 
int main()
{
   long long int n,m;
   cin>>n>>m;
 
if(n==1){
    cout<<"1"<<endl;
    return 0;
}
 
if(m==n){
    cout<<m-1<<endl;
    return 0;
}
 
 
  if((m-2)>(n-m-1)){
      cout<<m-1<<endl;
 
  }
  else if((m-2)<(n-m-1)){
      cout<<m+1<<endl;
  }
  else if((m-2)==(n-m-1)){
      if(m>=2){
          cout<<m-1<<endl;
      }
      else{
          cout<<m+1<<endl;
      }
  }
 
}
