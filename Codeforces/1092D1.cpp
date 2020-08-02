#include <iostream>
#include<bits/stdc++.h>
#include<stack>
using namespace std;
 
 
int main()
{
 
  long long int n;
  cin>>n;
 
long long int a;
 
stack<int> A;
 
  for(int i=1; i<=n; i++){
      cin>>a;
      a=a%2;
      
 
      if(A.empty()){
          A.push(a);
          continue;
         
      }
      else if(a==A.top()){
          A.pop();
      }
      else{
          A.push(a);
      }
 
    }
 
    if(A.size()>1){
        cout<<"NO"<<endl;
    }
    else{
        cout<<"YES"<<endl;
 
    }
 
 
 
}
