#include<bits/stdc++.h> 
using namespace std; 

void printTwoParts(int a[], int n) 
{ 
   
   
   int sum=0;
   
   for(int i=0; i<n; i++){
       sum+=a[i];
   }
   
   if(sum%2!=0){
       cout<<"No"<<endl;
   }
   else{
       sum=sum/2;
       int temp=0;
       int index=-1;
       
       for(int i=0; i<n; i++){
           cout<<a[i]<<" ";
           temp+=a[i];
           if(temp==sum){
               index=i;
               break;
           }
       }
       
          cout<<endl;
          
        for(int i=index+1; i<n; i++){
            cout<<a[i]<<" ";
          
       }
         cout<<endl;
       
   }
   
   
   
   
   
   
} 
  
// driver program 
int main() 
{ 
    int arr[] = {1 , 2 , 3 , 4 , 5 , 5 }; 
    int n = sizeof(arr)/sizeof(arr[0]); 
    printTwoParts(arr, n); 
    return 0; 
} 
