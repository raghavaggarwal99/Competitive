#include <iostream>
#include <vector>
#include<bits/stdc++.h>
#define ll long long
using namespace std;


typedef unsigned long long ull;

ull sum=0, l, r, i;
vector<ull> lucky, LIST;
vector<ull>::iterator it;

void gen(int digit, ull val)
{
    if (digit > 10) return ;
    lucky.push_back(val);
    gen(digit+1, val*10+4);
    gen(digit+1, val*10+7);
}

int main()
{
    
    gen(0, 0);
    
    sort(lucky.begin(), lucky.end());
    
    cin>>l>>r;
    
    LIST.push_back(l-1);
    
    for (it=lucky.begin(); it != lucky.end(); it++)
    {
        if (*it >= r) break;
        if (*it >= l) LIST.push_back(*it);
    }
    // for (i=0; i < LIST.size(); i++)
    // {
    //     cout<<LIST[i]<<" ";
    //     //cout << sum << endl;
    // }
    for (i=1; i < LIST.size(); i++)
    {
        sum+=(LIST[i]-LIST[i-1])*LIST[i];
        //cout << sum << endl;
    }
    
    //cout << sum << endl;
    for (i=0; i < lucky.size()-1; i++)
        if (lucky[i] < r and r <= lucky[i+1])
        {
            sum+=(r-max(lucky[i], l-1))*lucky[i+1];
            break;
        }
    cout << sum;
}
