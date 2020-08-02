#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int n,m;
int key;
 
int main(){
    cin>>n>>m;
    
    for(int i=1 ; i<=n ; i++){
        for(int j=1 ; j<=m ; j++){
            int mid;
            cin>>mid;
            if(mid == 1){
                if(i == 1 || j == 1 || i == n || j == m)key = 1;
            }
        }
    }
    if(key)
    cout<<"2"<<endl;
 
    else 
    cout<<"4"<<endl;
 
    return 0;
}
