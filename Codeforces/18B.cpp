//I was not getting any output if all the jumps he took, Dont Judge me
#include<unordered_map>
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
 
 
 
int main()
{
    long long int n,d,m,l,x;
    cin>>n>>d>>m>>l;
 
long long int i=1;
 
long long int index1=l;
long long int index2=m;
 
    while(1){
 
        long long int v=index1/d;
 
        x=d*(v+1);
 
        if(x<index2 && x>index1){
            cout<<x<<endl;
            return 0;
        }
 
        index1+=m;
        index2+=m;
        i++;
 
        if(i>n)
        break;
 
 
 
    }
 
    
while(1){
    if(x>((n-1)*m+l)){
        cout<<x<<endl;
        break;
    }
    x+=d;
}
 
 
 
