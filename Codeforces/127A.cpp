#include <bits/stdc++.h>
#include<unordered_map>
#include<algorithm>
#include <iomanip>
using namespace std;
 
 
int main()
{
    double n,k;
    cin>>n>>k;
 
    double a,b;
    cin>>a>>b;
 
    double sum=0;
 
    for(int i=1; i<n; i++){
        double c,d;
        cin>>c>>d;
 
        double dis=sqrt((c-a)*(c-a)+ (d-b)*(d-b));
        sum+=dis;
 
        a=c;
        b=d;
    }
double speed=50;
    
    std::cout << std::setprecision(11) << (sum*k)/speed << '\n';
 
}
