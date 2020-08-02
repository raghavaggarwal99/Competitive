#include <bits/stdc++.h>
#include<vector>
using namespace std;
 
 
 
int main()
{
  
    long long int n,m;
    cin>>n>>m;
 
int x=0;
int y=0;
 
    int *a=new int[n]; 
    for(int i=0; i<n; i++){
        cin>>a[i];
    }
 
if(m>n){
    cout<<"-1"<<endl;
    return 0;
}
 
 
    sort(a,a+n);
 
x+=a[n-m];
 
 
    cout<< x <<" "<<y<<endl;
   
 
 
}
