#include <iostream>
using namespace std;


long int c;
void merge(long int arr[],long int l,long int m,long int r) 
{ 
    long int i, j, k; 
    long int n1 = m - l + 1; 
    long int n2 =  r - m; 
    long int L[n1], R[n2]; 
    for (i = 0l; i < n1; i++) 
        L[i] = arr[l + i]; 
    for (j = 0l; j < n2; j++) 
        R[j] = arr[m + 1+ j]; 

    i = 0l; // Initial index of first subarray 
    j = 0l; // Initial index of second subarray 
    k = l; // Initial index of merged subarray 
    while (i < n1 && j < n2) 
    { 
        if (L[i] <= R[j]) 
        { 
            arr[k] = L[i]; 
            i++; 
        } 
        else
        { 
            arr[k] = R[j]; 
            j++; 
            c+=n1-i;
        } 
        k++; 
    } 
  
    while (i < n1) 
    { 
        arr[k] = L[i]; 
        i++; 
        k++; 
    } 

    while (j < n2) 
    { 
        arr[k] = R[j]; 
        j++; 
        k++; 
    } 

} 

void mergeSort(long int arr[],long int l, long int r) 
{ 
    if (l < r) 
    { 
        // Same as (l+r)/2, but avoids overflow for 
        // large l and h 
       long int m = l+(r-l)/2; 
  
        // Sort first and second halves 
        mergeSort(arr, l, m); 
        mergeSort(arr, m+1, r); 
  
        merge(arr, l, m, r); 
    } 
} 

int main() 
{ 
    int T;
    cin>>T;
    for(int i=0;i<T;i++){
        long int N;
        cin>>N;
        long int arr[N];
        for(long int j=0l;j<N;j++){
            cin>>arr[j];
        }
         c=0;
       mergeSort(arr,0L,N-1);
       cout<<c;
       cout<<"\n";
    }
    return 0; 
}
