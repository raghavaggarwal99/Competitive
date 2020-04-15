#include <bits/stdc++.h> 
using namespace std;   
int main(){
    int t,n,count,ans;
    cin>>t;
    
    for(int j=0; j<t; j++){
        cin>>n;
        unordered_map<int, int> x;
        int *a=new int[n];
        int b;count=0;
        for(int i=0; i<n; i++){
            cin>>a[i];
            x[a[i]]++;
        }
        for(int i=0; i<n; i++){
            cin>>b;
            if(x[b]>=1){
                x[b]--;
            }
            else{
                ans=b;
                count++;
            }
        }
        int check=0;
        if(count==0){
            cout<<"Yes"<<endl;
            check=1;
        }
        else if(count>1){
            cout<<"No"<<endl;
            check=1;
        }
        if(check==0){
            for(int i=0; i<n; i++){
                if(x[a[i]]>0){
                    ans=ans-a[i];
                    break;
                }
            }
            if(ans>0){
                cout<<abs(ans)<<" "<<"1"<<endl;
            }
            else{
                cout<<abs(ans)<<" "<<"2"<<endl;}}}}
