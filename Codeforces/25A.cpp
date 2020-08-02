#include <bits/stdc++.h>
#include<unordered_map>
#include<algorithm>
#include<vector>
using namespace std;
int min(int a, int b){
 
    if(a>b)
    return b;
    return a;
}
int max(int a, int b){
 
    if(a>b)
    return a;
    return b;
}
 
 
int main(){
 
    long long int n;
    cin>>n;
 
 
int index1=0;
int index2=0;
 
int count0=0;
int count1=0;
 
    for(int i=0; i<n; i++){
        int b;
        cin>>b;
 
        if(b%2==0){
            count0++;
            index1=i;
        }
        else{
            count1++;
            index2=i;
        }
    }
 
    if(count0==1){
        cout<<index1+1<<endl;
    }
    else{
        cout<<index2+1<<endl;
    }
 
    
 
 
 
 
} 
