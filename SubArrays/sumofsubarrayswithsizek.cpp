#include <iostream> 
using namespace std; 
  
// Function to find the sum of  
// all subarrays of size K 
int calcSum(int arr[], int n, int k) 
{ 
    // Initialize sum = 0 
    int sum = 0; 
  
    // Consider first subarray of size k 
    // Store the sum of elements 
    for (int i = 0; i < k; i++) 
        sum += arr[i]; 
  
    // Print the current sum 
    cout << sum << " "; 
  
    // Consider every subarray of size k 
    // Remove first element and add current 
    // element to the window 
    for (int i = k; i < n; i++) { 
          
        // Add the element which enters 
        // into the window and substract 
        // the element which pops out from 
        // the window of the size K 
        sum = (sum - arr[i - k]) + arr[i]; 
          
        // Print the sum of subarray 
        cout << sum << " "; 
    } 
} 
  
// Drivers Code 
int main() 
{ 
    int arr[] = { 1, 2, 3, 4, 5, 6 }; 
    int n = sizeof(arr) / sizeof(arr[0]); 
    int k = 3; 
      
    // Function Call 
    calcSum(arr, n, k); 
  
    return 0; 
} 
