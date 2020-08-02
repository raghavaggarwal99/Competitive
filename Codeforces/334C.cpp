#include <bits/stdc++.h>
#include<unordered_map>
using namespace std;
 
 
int main()
{
 
    long long int n;
    cin>>n;
 
long long int sum=3;
 
    while(1){
 
        if(n%sum!=0){
            long long int v=n/sum;
            cout<<v+1<<endl;
           
            return 0;
        }
 
        sum=sum*3;
    }
 
}
