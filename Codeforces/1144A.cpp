#include<bits/stdc++.h>
#include<unordered_map>
using namespace std;
 
int main()
{
 
    int n;
    cin>>n;
 
    unordered_map<char,int> x;
 
    
 
    for(int i=0; i<n; i++){
        string str;
        cin>>str;
        
        int b=0;
        sort(str.begin(),str.end());
        
        if(str.size()==1){
            cout<<"Yes"<<endl;
            continue;
        }
 
            for(int j=1; j<str.length(); j++){
 
                if(str[j]-str[j-1]!=1){
                    cout<<"No"<<endl;
                    b=1;
                    break;
                }
 
 
            }
            if(b==0){
                cout<<"Yes"<<endl;
            }
 
        x.clear();
 
    }
 
 
 
}
