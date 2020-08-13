#include <bits/stdc++.h> 
using namespace std; 
  

long int SubArrayProdct(int arr[], 
                        int n) 
{ 
    // Initialize the result 
    long int result = 1; 
  

    for (int i = 0; i < n; i++) 
        result *= pow(arr[i], 
                      (i + 1) * (n - i)); 
  
  
    return result; 
} 
  
// Driver Code 
int main() 
{ 
  
    int arr[] = { 2, 4 }; 
    int N = sizeof(arr) / sizeof(arr[0]); 
  
    // Function Call 
    cout << SubArrayProdct(arr, N) 
         << endl; 
    return 0; 
} 
