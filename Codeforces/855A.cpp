#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    while(cin>>n)
    {
        map <string,int> a;
        a.clear();
        int i;
        string  s;
        for(i=1;i<=n;i++)
        {
            cin>>s;
            if(a[s]==0){
                cout<<"NO"<<endl;
                a[s]=1;
            }
            else cout<<"YES"<<endl;
        }
    }
    return 0;
} 
