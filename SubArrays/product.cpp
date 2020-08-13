#include <iostream> 
# include <vector> 
using namespace std; 
  
long long int s=1;

void productall(vector<int> a) 
{       
     
     
    for(int i=0; i<a.size(); i++){
        // long long int q=a[i];
        
        for(int j=i; j<a.size(); j++){
            
            s*=a[j];
        }
        
        // s*=q;
    
    }
    
    cout<<s<<endl;

      
    // return; 
} 
  
int main() 
{ 
    
   vector<int> arr = {10,3, 7}; 
   productall(arr); 
   return 0; 
   
   
   
   
} 
