#include <iostream>
#include<unordered_map>
#include<queue>
using namespace std;
int main()
{
   
   long long int b,n,k;
   cin>>n>>k;
    
    queue<int> q;
    int *c=new int[n+1];
    for(int i=0; i<=n; i++){
        c[i]=0;
    }
    int max=0;
    for(int i=0; i<n; i++){
        cin>>b;
        q.push(b);
        if(b>max){
            max=b;
        }
    }
    if(q.front()==max){
        cout<<max<<endl;
        return 0;
    }
    int d=q.front();
    q.pop();
    
    for(int i=1; i<n; i++){
        if(q.front()<d){
            c[d]++;
           
            q.pop();
          
            
        }
        else{
            d=q.front();
            q.pop();
            c[d]++;
        }
        if(c[d]==k){
            cout<<d<<endl;
            return 0;
        }
    }
   cout<<max<<endl;
  
}
