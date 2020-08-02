#include<iostream>
#include<bits/stdc++.h>
#include<math.h>
#include<algorithm>
#include <iomanip>
using namespace std;
 
int main()
{
    long long int n,r;
    cin>>n>>r;
 
    
 
    double x=sin(3.14159265/n);
 
    
    std::cout << std::setprecision(9) << ((x*r)/(1-x)) << '\n';
 
 
}
