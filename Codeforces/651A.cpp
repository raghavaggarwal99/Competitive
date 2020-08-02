#include<iostream>
using namespace std;
int main(){
 
int a,b;
cin>>a>>b;
 
int c,d;
if(a>=b){
    d=a;
    c=b;
}
else if(a<b){
    d=b;
    c=a;
}
int count=0;
 
while(1){
 
    if(c==1 && d==1){
      break;
    }
 
    if((c==1 && d==2) || (d==1 && c==2) || (c==2 && d==2)){
        count++;
        break;
    }
 
    while(d!=1 && d!=2){
      d-=2;
      c++;
      count++;
    }
    while(c!=1 && c!=2){
      c-=2;
      d++;
      count++;
    }
}
cout<<count<<endl;
 
}
