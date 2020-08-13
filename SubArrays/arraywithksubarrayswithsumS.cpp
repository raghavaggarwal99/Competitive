#include<bits/stdc++.h>  
using namespace std;  
    
// Function to find array  
// with K subarrays with sum S 
void SubarraysWithSumS(int n, int k, int s) 
{ 
    for(int i=0;i<k;i++) 
        cout << s << " "; 
    for(int i=k;i<n;i++) 
        cout << s+1 << " "; 
}  
    
// Driver Code 
int main()  
{  
    int n = 4, k = 2, s = 3; 
      
    // Function call 
    SubarraysWithSumS(n, k, s); 
    return 0;  
}  
