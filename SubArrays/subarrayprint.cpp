#include <iostream> 
# include <vector> 
using namespace std; 
  

void printSubArrays(vector<int> a, int start, int end) 
{       
     if (end == a.size())  
        return; 
    
    else if(start>end){
        // cout<<a[start]<<endl;
        printSubArrays(a,0, end+1);
    }
    else{
        for(int i=start; i<=end; i++){
            cout<<a[i]<<" ";
        }
        cout<<endl;
        
        printSubArrays(a, start+1, end);
        
    }

      
    return; 
} 
  
int main() 
{ 
   vector<int> arr = {1, 2, 3}; 
   printSubArrays(arr, 0, 0); 
   return 0; 
   
   
   
   
} 
