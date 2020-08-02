//1030A
#include<iostream>
using namespace std;
int main(){
 
  int n;
  cin>>n;
  int x=0;
  for(int i=0; i<n; i++){
    int a;
    cin>>a;
    if(a==1){
      cout<<"HARD"<<endl;
      x=1;
      break;
    }
  }
if(x==0)
cout<<"EASY"<<endl;
 
}
