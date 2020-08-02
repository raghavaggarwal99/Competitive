#include <iostream>
#include <vector>
#include<bits/stdc++.h>
using namespace std;
 
int main() {
  
 
 int n;
 cin>>n;
 
    int **a=new int*[n];
    for(int i=0; i<n; i++){
        a[i]=new int[2];
    }
 
    for(int i=0; i<n; i++){
        cin>>a[i][0]>>a[i][1];
    }
 
 
int ans=0;
 
    for(int i=0; i<n; i++){
        int count1=0;
        int count2=0;
        int count3=0;
        int count4=0;
        for(int j=0; j<n; j++){
            if(j==i){
                continue;
            }
            if(a[j][0]>a[i][0] && a[j][1]==a[i][1]){
                count1++;
            }
            if(a[j][0]<a[i][0] && a[j][1]==a[i][1]){
                count2++;
            }
            if(a[j][0]==a[i][0] && a[j][1]>a[i][1]){
                count3++;
            }
            if(a[j][0]==a[i][0] && a[j][1]<a[i][1]){
                count4++;
            }
            if(count1>=1 && count2>=1 && count3>=1 && count4>=1){
                ans++;
                //cout<<a[i][0]<<" "<<a[i][1]<<endl;
                break;
            }
        }
    }
 
 cout<<ans<<endl;
}
