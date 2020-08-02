#include<bits/stdc++.h>
using namespace std;
 
 
int main()
{
    
    long long int n;
    cin>>n;
 
    if(n%2!=0){
        long long int x=n/2;
        cout<<-x-1<<endl;
        return 0;
    }
    else{
        long long int x=(n/2)-1;
        cout<<-x-1+n<<endl;
        
    }
    
}
