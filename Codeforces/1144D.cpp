#include<bits/stdc++.h>
#include<unordered_map>
using namespace std;
 
int main()
{
 
    int n;
    cin>>n;
int max=0;
 
    unordered_map<int,int> x;
    int *a=new int[n+1];
   int d=0;
vector<int> index;
 
    for(int i=0; i<n; i++){
       cin>>a[i];
 
       x[a[i]]++;
 
       if(x[a[i]]>max){
          max=x[a[i]];
          d=a[i];
       }
 
    }
 
    for(int i=0; i<n; i++){
      if(a[i]==d){
          index.push_back(i);
      }
 
    }
 
    sort(index.begin(),index.end());
cout<<n-x[d]<<endl;
int copy=index[0];
   for(int j=index[0]-1; j>=0; j--){
       if(j<0){
           break;
       }
       if(a[j]<d){
           cout<<"1"<<" "<<j+1<<" "<<copy+1<<endl;
           copy=j;
       }
       else if(a[j]>d){
           cout<<"2"<<" "<<j+1<<" "<<copy+1<<endl;
           copy=j;
       }
   }
 
for(int k=0; k<index.size()-1; k++){
    copy=index[k];
 
   for(int j=index[k]; j<index[k+1]; j++){
       
       if(a[j]==d){
           continue;
       }
        if(a[j]<d){
           cout<<"1"<<" "<<j+1<<" "<<copy+1<<endl;
           copy=j;
       }
       else if(a[j]>d){
           cout<<"2"<<" "<<j+1<<" "<<copy+1<<endl;
           copy=j;
       }
 
   } 
}
copy=index[index.size()-1];
 
for(int j=index[index.size()-1]; j<n; j++){
       if(j>=n){
           break;
       }
       if(a[j]==d){
           continue;
       }
 
        if(a[j]<d){
           cout<<"1"<<" "<<j+1<<" "<<copy+1<<endl;
           copy=j;
       }
       else if(a[j]>d){
           cout<<"2"<<" "<<j+1<<" "<<copy+1<<endl;
           copy=j;
       }
 
   } 
 
 
 
 
 
 
 
 
 
 
 
}
