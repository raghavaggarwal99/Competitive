#include<unordered_map>
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    int n;
    cin>>n;
 
    char **a=new char*[n];
    for(int i=0; i<n; i++){
        a[i]=new char[n];
        for(int j=0; j<n; j++){
            a[i][j]=0;
        }
    }
 
    for(int i=0; i<n; i++){
        for(int j=0;j <n;j++){
            cin>>a[i][j];
        }
    }
 
    if(n<=2){
        cout<<"0"<<endl;
        return 0;
    }
int count=0;
 
    for(int i=1; i<=n-2; i++){
 
        for(int j=1; j<=n-2; j++){
 
                if(a[i][j]=='X'){
                    if(a[i+1][j+1]=='X' && a[i-1][j-1]=='X' && a[i-1][j+1]=='X'                               && a[i+1][j-1]=='X'){
                        count++;
                    }
                }
        }
    }
    cout<<count<<endl;
    
 
}
