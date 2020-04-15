#include <bits/stdc++.h>
#include<unordered_map>
#include<vector>
using namespace std;
int min(int a, int b){
 
    if(a>b)
    return b;
    return a;
}
int max(int a, int b){
 
    if(a>b)
    return a;
    return b;
}
 
 
int main()
{
   
    string str;
    cin>>str;
 
    int n;
    cin>>n;
int ans=0;
//cout<<n<<endl;
 
    for(int i=0; i<n; i++){
        string temp;
        cin>>temp;
 
            if(temp[0]==temp[1]){
                
                for(int j=0; j<str.length(); j++){
 
                    while(str[j]==temp[0]){
                        ans++;
                        j++;
                    }
                    ans--;
                }
                continue;
            }  
 
            int count1=0; int count2=0;
 
            for(int j=0; j<str.length(); j++){
                count1=0;
                count2=0;
                
                while(str[j]==temp[0] || str[j]==temp[1]){
                    if(str[j]==temp[0])
                        count1++;
                    if(str[j]==temp[1]){
                        count2++;
                    }  
                    j++;  
                }
                ans+=min(count1, count2);
            } 
    }
 
    cout<<ans<<endl;
 
 
 
  
}
