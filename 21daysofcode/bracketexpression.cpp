#include <bits/stdc++.h> 
using namespace std;   
int main(){
    
    int t,n,count,maxx,ans;
    cin>>t;
    
    for(int i=0; i<t; i++){
        cin>>n;
        char v;
        stack<char> s;
        count=0;
        maxx=0;
        ans=0;
        unordered_map<int,int> x;
        int top=0;
        for(int i=0; i<n; i++){
            cin>>v;
            if(v=='['){
                s.push(v);
                if(s.size()>top){
                    top=s.size();
                }
                x[s.size()]++;
                if(x[s.size()]>maxx){
                    maxx=x[s.size()];
                }
            }
            else{
                count++;
                s.pop();
            }
            
            
        }
        for(int i=1; i<=top; i++){
            if(x[i]==maxx){
                ans++;
            }
        }
        cout<<count<<" "<<top<<" "<<maxx<<" "<<ans<<endl;
      
    }
    
    
    
    
    
    
}
