#include <bits/stdc++.h>
using namespace std;
 
int main() {
  long long int n,m;
  cin >> n>>m;
 
 
int *a=new int[6];
int *b=new int[7];
int *c=new int[7];
 
//if in left
a[0]=0;
a[1]=1;
a[2]=2;
a[3]=2;
a[4]=1;
a[5]=0;
a[6]=0;
 
//if in right
b[0]=2;
b[1]=2;
b[2]=1;
b[3]=0;
b[4]=0;
b[5]=1;
b[6]=2;
 
//if in middle
c[0]=1;
c[1]=0;
c[2]=0;
c[3]=1;
c[4]=2;
c[5]=2;
c[6]=1;
 
 
long long int copy2=n%6;
 
 
 if(a[copy2]==m  && copy2>0){
    cout<<"0"<<endl;
    return 0;
}
  if(b[copy2]==m && copy2>0 ){
    cout<<"2"<<endl;
    return 0;
}
 
//cout<<c[4]<<endl;
 
if(c[copy2]==m && copy2>0){
    cout<<"1"<<endl;
    return 0;
}
 
 if(a[copy2]==m){
    cout<<"0"<<endl;
    return 0;
}
  if(b[copy2]==m ){
    cout<<"2"<<endl;
    return 0;
}
 
//cout<<c[4]<<endl;
 
if(c[copy2]==m){
    cout<<"1"<<endl;
    return 0;
}
 
 
}
