#include <iostream>
#include<bits/stdc++.h>
#include<unordered_map>
#include<string.h>
#define INF 1e+8
using namespace std;
 
 
int min(int a,int b){
    if(a<b)
    return a;
    
    return b;
}
 
 
int main()
{
   
   
   
   
  int n,v;
  cin>>n;
  
  unordered_map<string,int> x;
  
  
  
  
  x["A"]=INF;
  x["B"]=INF;
  x["C"]=INF;
  x["AB"]=INF;
  x["BC"]=INF;
  x["AC"]=INF;
  x["ABC"]=INF;
  
  for(int i=0; i<n; i++){
      cin>>v;
      string str;
      cin>>str;
      //cout<<str<<endl;
      sort(str.begin(), str.end());
      
     x[str]=min(x[str],v); 
     //cout<<x[str]<<endl;
  }
  //cout<<x["A"]<<endl;
  
  int d=INT_MAX;
  
  d=min(x["A"]+x["B"]+x["C"], d);
  //cout<<d<<endl;
  //cout<<x["BC"]+x["A"]<<endl;
  
  d=min((x["A"]+x["BC"]), d);
  //cout<<d<<endl;
  d=min(x["AB"]+x["C"], d);
  d=min(x["B"]+x["AC"], d);
  d=min(x["AB"]+x["BC"], d);
  d=min(x["AB"]+x["AC"], d);
  d=min(x["BC"]+x["AC"], d);
  d=min(x["ABC"], d);
  
  //cout<<d<<endl;
  if(d==0 || d==INF){
      cout<<-1<<endl;
      return 0;
  }
  
  else{
      cout<<d<<endl;
  }
  
   
}
