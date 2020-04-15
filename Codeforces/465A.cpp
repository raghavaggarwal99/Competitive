#include <stdio.h>
#include <string.h>
#include<math.h>
#include <iostream>
 
using namespace std;
 
 
int main () {
    
    long long int n;
    cin>>n;
 
    char *a=new char[n];
 
int count=0;
int v=0;
 
    for(int i=0; i<n; i++){
        cin>>a[i];
 
        if(a[i]=='0'){
            v=1;
        }
 
        if(a[i]=='1' && v==0){
                count++;
        }
 
    }
 
if(count!=n){
    if(a[count]=='0'){
        count++;
    }
}
 
cout<<count<<endl;
 
 
 
 
}
 
