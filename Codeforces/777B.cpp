#include <bits/stdc++.h>
#include<unordered_map>
#include <utility> 
#include<string>
using namespace std;
 
#define LL long long
 
int a[1009],b[1009];
char s1[1009],s2[1009];
 
int main()
{
    int n;
    cin>>n;
 
        cin>>s1>>s2;
        for(int i=0 ; i<n; i++)
            a[i]=s1[i]-'0',b[i]=s2[i]-'0';
        sort(a,a+n);
        sort(b,b+n);
        int ma=0,mi=0;
        for(int i=0,j=0; i<n,j<n;)
        {
            if(a[i]<=b[j])
            {
                mi++;
                i++;
                j++;
            }
            else j++;
        }
        for(int i=0,j=0; i<n,j<n;)
        {
            if(a[i]<b[j])
            {
                ma++;
                i++;
                j++;
            }
            else j++;
        }
        printf("%d\n%d\n",n-mi,ma);
    
    return 0;
}
 
 
