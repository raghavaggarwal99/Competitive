include <bits/stdc++.h>
#include<vector>
#define maxn 200005
using namespace std;
 
 
vector<int> v[maxn],ans[maxn];
 
int func(int a, int b){
 
return a>b;
 
}
 
 
int main()
{
  
    long long int n,m,c,b;
    cin>>n>>m;
 
long long int max=0;
 
    for(int i=0; i<n; i++){
 
            cin>>c>>b;
                v[c].push_back(b);
 
                if(max<v[c].size()){
                        max=v[c].size();
                }
                
    }
 
 
for(int i=1;i<=m;i++)
       sort(v[i].begin(), v[i].end(), func);
 
//cout<<v[2][0]<<" "<<v[2][1]<<endl;
 
 
 
for(int i=1;i<=m;i++){
    long long int sum=0;
    for(int j=0; j<v[i].size(); j++){
        sum+=v[i][j];
        ans[j].push_back(sum);
    }
 
}
    
 
long long int max1=0;
 
for(int i=0; i<max; i++){
    long long int sum2=0;
 
    for(int j=0; j<ans[i].size(); j++){
            if(ans[i][j]>0) //this was the changing point, if some -ve added sum will decrease
            
        sum2+=ans[i][j];
    }
        //cout<<sum2<<endl;
 
    if(sum2>max1){
        max1=sum2;
    }
        
    
    
}
if(max1<=0){
    cout<<"0"<<endl;
 
}
else{
    cout<<max1<<endl;
 
}
 
 
}
