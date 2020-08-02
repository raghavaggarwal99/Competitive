#include<cstdio>
#include<iostream>
#include<unordered_map> 
using namespace std;
int main()
{
   int n,m;
 
   cin>>n>>m;
unordered_map<char,int> x;
 
   char** a = new char*[n];
for(int i = 0; i < n; ++i)
    a[i] = new char[m];
 
for(int i=0; i<n; i++){
    for(int j=0; j<m; j++){
        cin>>a[i][j];
    }
}
 
for(int j=1; j<m; j++){
    if(a[0][j]!=a[0][j-1]){
               cout<<"NO"<<endl;
               return 0;
    }
}
 
 
 
   for(int i=1; i<n; i++){
        for(int j=1; j<m; j++){
           
           
 
           if(a[i][j]!=a[i][j-1]){
               cout<<"NO"<<endl;
               return 0;
           }
           if(a[i][j]==a[i-1][j]){
               cout<<"NO"<<endl;
               return 0;
           }
 
 
        }
 
        
    }
 
 
 
  cout<<"YES"<<endl;
 
 
 
 
 
 
 
   
}
