#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int min(int a, int b){
    if(a<b)
    return a;
    return b;
}
int main ()
 
{
 
long long int n,k;
cin>>n>>k;
 
    string str;
    cin>>str;
 
vector<int> a;
 
    for(int i=0; i<str.length()-1; i++){
 
            if(str[i]=='4' && str[i+1]=='7'){
                a.push_back(i+1);
            }
    }
 
    if(a.size()==0){
        cout<<str<<endl;
        return 0;
    }
 
int p=-1;
int g=-1;
 
    for(int i=0; i<a.size(); i++){
            
            a[i];
            if(k==0){
                break;
            }
            if(a[i]%2==0){
                
                if(str[a[i]-2]=='4'){
                    p=a[i]-1;
                    break;
                }
                
                else{
                    str[a[i]-1]='7';
                    str[a[i]]='7';
                    k--;
                }
 
            }
            else{
 
                if(a[i]<str.length()-1){
                    if(str[a[i]+1]=='7'){
                        g=a[i]-1;
                        break;
                    }
                }
                if(str[a[i]-1]=='4'&& str[a[i]]=='7'){
                    str[a[i]-1]='4';
                    str[a[i]]='4';
                    k--;
                }
            }
 
    }
 
 
 
if(p!=-1){
    if(k%2!=0){
        str[p]='7';
        str[p+1]='7';
    }
}
else if(g!=-1){
    if(k%2!=0){
        str[g]='4';
        str[g+1]='4';
    }
 
}
 
 
 
for(int i=0; i<n; i++){
    cout<<str[i];
}
 
 
 
}
