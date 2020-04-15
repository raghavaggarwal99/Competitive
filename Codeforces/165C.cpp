#include <iostream>
#include <cstdio>
using namespace std;
 
int main() {
    long long int k;
    cin>>k;
 
    string str;
    cin>>str;
long long int ans=0;
long long int *a=new long long int[10000000];
a[0]=1;
long long int count=0;
 
    for(int i=0; i<str.length(); i++){
        if(str[i]=='1'){
            count++;
        }
        if(count>=k){
            ans+=a[count-k];
        }
        a[count]++;
 
 
 
 
    }
    cout<<ans<<endl;
}
