#include <bits/stdc++.h>
using namespace std;
 
int main()
{
   
    int n,k;
    cin>>n>>k;
 
 
 
if(n==1){
    cout<<"2"<<endl;
    return 0;
}
 
long long int count=2;
 
count+=(n-1)*2;
count+=n-1;
 
if((n-k)>(k-1)){
 
    count+=k-1;
    
}
else{
    count+=n-k;
}
 
 
cout<<count+1<<endl;
  
}
