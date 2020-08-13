#include<iostream> 
using namespace std; 
  
int countEvenSum(int arr[], int n) 
{ 
   
    int temp[2] = {1, 0}; 
  
   
    int result = 0, sum = 0; 
  
    
    for (int i=0; i<=n-1; i++) 
    { 
        // 2 is added to handle negative numbers 
        sum = ( (sum + arr[i]) % 2 + 2) % 2; 
  
        // Increment even/odd count 
        temp[sum]++; 
    } 
  
    
    result = result + (temp[0]*(temp[0]-1)/2); 
    result = result + (temp[1]*(temp[1]-1)/2); 
  
    return (result); 
} 
  

int main() 
{ 
    
    
    int t;
    cin>>t;
    for(int w=0; w<t; w++){
        int n;
        cin>>n;
        
        int *a=new int[n];
        
        for(int i=0; i<n; i++){
            cin>>a[i];
        }
        
        cout<< countEvenSum(a,n)<<endl;
    }
    
} 
