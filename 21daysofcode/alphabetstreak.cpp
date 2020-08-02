#include <bits/stdc++.h> 
using namespace std; 
int main(){
    int t,n;
    cin>>t;
    for(int i=0; i<t; i++){
        cin>>n;
        unordered_map<char,int> x;
        int count=0;
        int ans1=0;
        char *a=new char[n];
        for(int j=0; j<n; j++){
            cin>>a[j];
        }
       int *b=new int[n];
        b[0]=1;
        char z=a[0];
        count=1;
        for(int j=1; j<n; j++){
            if(a[j]==z){
                count++;
            }
            else{
                z=a[j];
                count=1;
            }
            b[j]=count;
        }
        for(int j=0; j<n; j++){
            if(b[j]>ans1){
                ans1=b[j];
            }
        }
        cout<<ans1<<" ";
        string s="";
        for(int j=0; j<n; j++){
            if(b[j]==ans1 && x[a[j]]==0){
                s+=a[j];
                x[a[j]]=1;
            }
        }
        sort(s.begin(),s.end());
        cout<<s<<endl;
    }
}
