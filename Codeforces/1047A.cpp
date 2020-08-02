#include <iostream>
 
using namespace std;
 
int main()
{
  long long int n;
  cin>>n;
  
  long long int a=1;
  long long int b=0;
  long long int c=1;
  
 
 b=n-2;
 if(b%3==0){
     a++;
     b--;
 }
 
  
  cout<<a<<" "<<b<<" "<<c<<endl;
   return 0;
}
