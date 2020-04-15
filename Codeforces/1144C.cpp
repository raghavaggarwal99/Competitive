#include<bits/stdc++.h>
#include<unordered_map>
using namespace std;
 
int main()
{
 
    int n;
    cin>>n;
 
    unordered_map<int,int> x;
    int *a=new int[n+1];
    vector<int> inc;
    vector<int> dec;
 
 
    for(int i=0; i<n; i++){
       cin>>a[i];
 
       x[a[i]]++;
 
       if(x[a[i]]>=3){
           cout<<"NO"<<endl;
           return 0;
       }
 
    }
 
    for(int i=0; i<n; i++){
       
     if(x[a[i]]==1){
         inc.push_back(a[i]);
         x[a[i]]=0;
     }
     else if(x[a[i]]==2){
         inc.push_back(a[i]);
         dec.push_back(a[i]);
         x[a[i]]=0;
     }
 
    }
    
 sort(inc.begin(),inc.end());
    sort(dec.begin(),dec.end());
 
    cout<<"YES"<<endl;
    cout<<inc.size()<<endl;
 
    for(int j=0; j<inc.size(); j++){
        cout<<inc[j]<<" ";
    }
    cout<<endl;
    cout<<dec.size()<<endl;
    for(int j=dec.size()-1; j>=0; j--){
        cout<<dec[j]<<" ";
    }
    cout<<endl;
 
 
 
 
 
}
