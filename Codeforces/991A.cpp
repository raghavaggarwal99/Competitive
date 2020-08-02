#include<iostream>
using namespace std;
int main(){
  int  a,b,c,n;
  cin>>a>>b>>c>>n;
 
  if(a>n || b>n || c>n){
    cout<<-1<<endl;
    return 0;
  }
  if(c>a || c>b){
    cout<<-1<<endl;
    return 0;
 
  }
 
  if(n-(a+b-c)>=1){
    cout<<n-(a+b-c)<<endl;
  }
  else
    cout<<-1<<endl;
 
 
}
