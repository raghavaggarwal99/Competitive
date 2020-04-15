#include<bits/stdc++.h>
#include<unordered_map>
typedef long long int ll;
 
#define pp pair<ll,ll>
#define MAXN 1000050
using namespace std;
 
 
int main(){
  
    ll n;
    cin>>n;
 
    for(int i=0; i<n; i++){
        ll l;
        string str;
        cin>>l;
        cin>>str;
        int index=0;
        int check=0;
        for(int j=0; j<str.length(); j++){
            if(str[j]=='8'){
                check=1;
                index=j;
                break;
            }
        }
        if(check==1 && l-index>=11){
            cout<<"YES"<<endl;
            continue;
        }
        cout<<"NO"<<endl;
    }
 
}
