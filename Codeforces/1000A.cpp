#include <iostream>
#include<unordered_map>
using namespace std;
 
int main()
{
   int n;
   cin>>n;
 
   unordered_map<string,int> x;
   
   for(int i=0; i<n; i++){
       string str;
       cin>>str;
       
       x[str]++;
       
 
   }
   int count=0;
   for(int i=0; i<n; i++){
       string str2;
       cin>>str2;
      
       if(x[str2]>0){
           x[str2]--;
           
       }
       else{
           count++;
       }
       
       
   }
   
   cout<<count<<endl;
  
}
