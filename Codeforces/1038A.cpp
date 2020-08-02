#include <iostream>
#include <string>
#include <unordered_map>
#include<climits>
using namespace std;
 
int main()
{
   long long int n,k;
   char z,temp;
    unordered_map<char,int> x;
   cin>>n>>k;
 
   
   for(int j=0; j<n; j++){
        cin>>z;
   x[z]++;
 
   }
 
int min=INT_MAX;
   
   string str2;
   for(temp='A'; temp<'A'+k; temp++){
 
       if(x[temp]<min){
           min=x[temp];
       }
       
   }
   
  
   
   
   
       cout<<min*k<<endl;
 
   
 
   
}
