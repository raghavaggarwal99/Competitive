#include<bits/stdc++.h>
#include<unordered_map>
using namespace std;
 
int main()
{
   long long int n;
    cin>>n;
    char a[n];
    
    unordered_map<char,int> x;
    //unordered_map<char,int> y;
    for(int i=0; i<n; i++){
        cin>>a[i];
        x[a[i]]++;
       
    }
    if(x[a[0]]==n){
        cout<<"NO"<<endl;
        return 0;
    }
    
    cout<<"YES"<<endl;
    
    for(int i=0; i<n; i++){
        if(x[a[i]]>0){
            if(a[i+1]!=a[i]){
                cout<<a[i]<<a[i+1]<<endl;
                return 0;
            }
        }
    }
    
    
    
    
}
