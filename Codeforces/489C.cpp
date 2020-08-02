#include<unordered_map>
#include<iostream>
#include<bits/stdc++.h>
#include <iomanip> 
using namespace std;
 
int main()
{
 
    int m,s;
    cin>>m>>s;
 
 if(s==0 && m==1){
        cout<<"0"<<" "<<"0"<<endl;
        return 0;
    }
 
 
    if(s<1 && m>1){
        cout<<"-1"<<" "<<"-1"<<endl;
        return 0;
    }
 
    if(s>(9*m)){
        cout<<"-1"<<" "<<"-1"<<endl;
        return 0;
    }
 
    vector<int> a;
    vector<int> b;
b.push_back(1);
 
    for(int i=0; i<m; i++){
        a.push_back(9);
    }
     for(int i=1; i<m; i++){
        b.push_back(0);
    }
 
 
 
    long long int sum=9*m;
long long int sum2=1;
 
    for(int i=m-1; i>=0; i--){
 
        if(sum==s){
            break;
        }
 
 
        a[i]-=9;
        sum-=9;
 
        if(sum<s){
            a[i]+=s-sum;
            sum+=s-sum;
            break;
        }
        else if(sum==s){
            break;
        }
 
    }
 
 
    for(int i=m-1; i>=1; i--){
        if(sum2==s){
            break;
        }
 
        b[i]+=9;
        sum2+=9;
 
        if(sum2>s){
            b[i]-=sum2-s;
            sum2-=sum2-s;
            break;
        }
        else if(sum2==s){
            break;
        }
 
    }
 
 
if(sum2<s){
    b[0]+=-sum2+s;
}
 
 
 
 for(int i=0; i<m; i++){
        cout<<b[i];
    }
 
     
cout<<" ";
 
    for(int i=0; i<m; i++){
        cout<<a[i];
    }
 
  
 
 
 
}
