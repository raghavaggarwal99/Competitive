#include <bits/stdc++.h> 
using namespace std; 
int min(int a, int b){
    if(a>b){
        return b;
    }
    return a;
    
}
int main(){
    int t,n,m,r,c;
    cin>>t;
    
    for(int i=0; i<t; i++){
        cin>>n>>m>>r>>c;
        int left=c;
        int right=m-c-1;
        int up=r;
        int down=n-r-1;
        
        cout<<left+right+up+down+min(left,up)+min(up,right)+min(down,right)+min(left,down)<<endl;
        
        
    }
    
    
}
