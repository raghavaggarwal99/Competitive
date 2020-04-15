#include <bits/stdc++.h> 
using namespace std; 
int main(){
    int t,n,v;
    cin>>t;
    for(int j=0; j<t; j++){
        cin>>n;
        vector<int> A;
        for(int i=0; i<pow(2,n-1); i++){
            cin>>v;
            A.push_back(v);
        }
        while(1){
            if(A.size()==1){
                cout<<A[0]<<endl;
                break;
            }
            vector<int> ans;
            int i=0;
            while(1){
                if(A[i]==0 || A[i+1]==0){
                    ans.push_back(1);
                }
                else{
                    ans.push_back(0);
                }
                i+=2;
                if(i>=A.size()){
                    break;
                }
            }
            A.clear();
            for(int k=0; k<ans.size(); k++){
               A.push_back(ans[k]);
            }
            ans.clear();
        }
        
    }
    
    
    
}
