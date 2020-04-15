#include<cstring>
#include<iostream>
#include<algorithm>
using namespace std;
 
int main(){
    int n,i,j,equalnum,flag;
    while(cin>>n){
        equalnum=0;
        pair<int,int>a[n];
        for(i=0;i<n;i++){
            cin>>a[i].first,a[i].second=i;
        }
        sort(a,a+n);
        for(i=0;i<n-1;i++){
            if(a[i].first==a[i+1].first){
                equalnum++;
            }
        }
        if(equalnum<2){
            cout<<"NO"<<endl;
            return 0;
        }
        else{
            cout<<"YES"<<endl;
            for(i=0;i<n;i++){
                if(i==n-1){
                    cout<<a[i].second+1<<endl;
                }
                else{
                    cout<<a[i].second+1<<" ";
                }
            }
            flag=0;
            for(i=0;i<n,flag!=2;i++){
                if(a[i].first==a[i+1].first){
                    swap(a[i],a[i+1]);
                    for(j=0;j<n;j++){
                        if(j==n-1){
                            cout<<a[j].second+1<<endl;
                        }
                        else{
                            cout<<a[j].second+1<<" ";
                        }
                    }
                    flag++;
                }
            }
        }
    }
    return 0;
}
