//1068A
#include <iostream>
#include<unordered_map>
using namespace std;
 
int main()
{
 int n;
 cin>>n;
 int count=n;
 unordered_map<char,int> x;
 char *a=new char[n];
 
 for(int i=0; i<n; i++){
     cin>>a[i];
     x[a[i]]++;
   
 }
// cout<<x['8']<<endl;
 
 int ans=0;
 while(1){
     
     int v=0;
    //cout<<x['1']<<endl;
     
     if(x['8']==0)
     break;
     //cout<<x['1']<<endl;
     x['8']--;
     //cout<<x['8']<<endl;
     v++;
     //cout<<v<<endl;
        for(char i='0'; i<='9'; i++){
         
                if(i=='8')
                continue;
                
        
                if(x[i]==0)
                continue;
        
        
                v+=x[i];
                x[i]=0;
                if(v>=11){
                    x[i]=v-11;
                 break;
            
                }
        
             
             //cout<<v<<endl;
         }
         //cout<<x['8']<<endl;
             if(v<11 && x['8']>=11-v){
                 x['8']=x['8']-11+v;
             v=11;
             
             
            }
         
         //cout<<v<<endl;
         if(v>=11)
         ans++;
         else
         break;
         
         
         
         
     }
     
     
     cout<<ans<<endl;
     
     
 
 
   
   
}
