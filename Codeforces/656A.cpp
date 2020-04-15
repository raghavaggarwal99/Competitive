#include <bits/stdc++.h>
using namespace std;
 
int main() {
  long long int n;
  cin >> n;
if(n<13){
long long int b=pow(2,n);
cout<<b<<endl;
}
else{
long long int v= (pow(2,13)-100)*pow(2, n-13);
cout<<v<<endl;
}
 
 
 
}
