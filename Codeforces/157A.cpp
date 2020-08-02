#include<bits/stdc++.h>
typedef long long int ll;
#define pair<ll,ll> pii;
using namespace std;
 
// Driver program  
int main() 
{ 
    ll n ;
    cin>>n; 
    
    int **a=new int*[n+1];
    for(int i=0; i<n; i++){
        a[i]=new int[n];
    }
 
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cin>>a[i][j];
        }
    }
if(n==1){
    cout<<"0"<<endl;
    return 0;
}
    vector<int> row;
    vector<int> column;
 
    for(int i=0; i<n; i++){
        long long int sum=0;
 
        for(int j=0; j<n; j++){
            sum+=a[i][j];
        }
        row.push_back(sum);
 
    }
    for(int i=0; i<n; i++){
        long long int sum=0;
 
        for(int j=0; j<n; j++){
            sum+=a[j][i];
        }
        column.push_back(sum);
 
    }
int count=0;
 
for(int i=0; i<n; i++){
 
    for(int j=0; j<n; j++){
        if(column[i]>row[j]){
            count++;
        }
    }
}
 
cout<<count<<endl;
 
 
 
 
} 
