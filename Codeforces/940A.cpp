#include <bits/stdc++.h>
 
using namespace std;
 
#define MAXN 105
#define MAX(a,b) a>b?a:b
int n,d,mx;
int pre[MAXN];
 
int main()
{
    mx = -1;
    cin>>n>>d;
 
    for(int i=0;i<n;i++)
    cin>>pre[i];
 
    sort(pre,pre+n);
    for(int i=0;i<n;i++){
        for(int j=i;j<n;j++){
            if(pre[j] - pre[i] <= d){
                mx = MAX(mx,j-i+1);
            }
        }
    }
    cout<<n-mx<<endl;
 
    return 0;
}
