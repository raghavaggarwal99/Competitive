#include<iostream>
#include <bits/stdc++.h>
#include<unordered_map>
using namespace std;
 
int min(int a, int b){
    if(a>b)
    return b;
    else
    return a;
}
 
int main()
{
    long long int n,v,f,di,j;
    cin>>n;
 
    int *a=new int[n];
    for(int i=0; i<n; i++){
        cin>>a[i];
 
    }
 
    sort(a,a+n);
 
if(n==1){
    cout<<"-1"<<endl;
    return 0;
}
if(n==2){
    if(a[1]==a[0]){
        cout<<"1"<<endl;
            cout<<a[0]<<endl;
            return 0;
    }
    if((a[1]-a[0])%2==0){
        di=a[1]-a[0];
        cout<<"3"<<endl;
        cout<<a[0]-di<<" "<<a[0]+di/2<<" "<<a[1]+di<<endl;
    }
    else{
        cout<<"2"<<endl;
        di=a[1]-a[0];
        cout<<a[0]-di<<" "<<a[1]+di<<endl;
    }
    return 0;
}
 
 
long long int diff=a[1]-a[0];
long long int diff2=a[2]-a[1];
long long int diff3=a[3]-a[2];
 
if(n==3){
    diff=min(a[1]-a[0],a[2]-a[1]);
}
else if(diff==diff2){
    diff=diff;
}
else if(diff==diff3){
    diff=diff;
}
else if(diff2==diff3){
    diff=diff2;
}
else{
    cout<<"0"<<endl;
    return 0;
}
 
 
int count=0;
 
for(int i=1; i<n; i++){
    if(a[i]-a[i-1]!=diff){
            count++;
            v=a[i-1];
            f=a[i];
            j=i;
            di=f-v;
    }
}
 
if(count>1){
    cout<<"0"<<endl;
    return 0;
}
 
if(count==1){
//cout<<"hb";
    if(di==0){
        cout<<"0"<<endl;
        return 0;
    }
 
    if(di%2==0){
        if(j<=n-2 && di/2 == a[n-1]-a[n-2]){
                cout<<"1"<<endl;
                cout<<v+di/2<<endl;
        }
        else if(j>=1 && di/2==a[1]-a[0]){
             cout<<"1"<<endl;
                cout<<v+di/2<<endl;
        }
        else{
        cout<<"0"<<endl;
        return 0;
    }
    }
    else{
        cout<<"0"<<endl;
        return 0;
    }
 
}
 
if(count==0){
diff=a[1]-a[0];
    if(diff==0){
        cout<<"1"<<endl;
        cout<<a[0]<<endl;
        return 0;
    }
 
cout<<"2"<<endl;
cout<<a[0]-diff<<" "<<a[n-1]+diff<<endl;
}
    
}
