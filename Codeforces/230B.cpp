//Time limit exceeded
//230B
 
#include<iostream>
#include<algorithm>
#include<string.h>
#include<bits/stdc++.h>
 
using namespace std;
bool prime[1000000]; 
void SieveOfEratosthenes() 
{ 
    // Create a boolean array "prime[0..n]" and initialize 
    // all entries it as true. A value in prime[i] will 
    // finally be false if i is Not a prime, else true. 
   
    memset(prime, true, sizeof(prime)); 
  
    for (int p=2; p*p<=1000000; p++) 
    { 
        // If prime[p] is not changed, then it is a prime 
        if (prime[p] == true) 
        { 
            // Update all multiples of p 
            for (int i=p*2; i<=1000000; i += p) 
                prime[i] = false; 
        } 
    } 
  
    // Print all prime numbers 
} 
 
int main(){
    
 
 long long int  t,n;
cin>>t;
 
SieveOfEratosthenes();
 
for(int i=0; i<t; i++){
    cin>>n;
    
    if(n==1){
        cout<<"NO"<<endl;
        continue;
    }
    
    
  long double sr = sqrt( n);
 
 //cout<<sr<<endl;
 
   if(((sr - floor(sr)) == 0)){
       if(prime[int(sr)]==true)
       cout<<"YES"<<endl;
       else
       cout<<"NO"<<endl;
   } 
   else{
       cout<<"NO"<<endl;
   }
    
}
}
