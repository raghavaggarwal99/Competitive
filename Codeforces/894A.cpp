#include<bits/stdc++.h>
#include<unordered_map>
typedef long long int ll;
 
#define pp pair<ll,ll>
#define MAXN 1000050
using namespace std;
 
int lc[MAXN];
int rc[MAXN];
char c[MAXN]; 
int main()
{
    cin>>c;
    int l=strlen(c);
    memset(lc,0,sizeof(lc));
    memset(rc,0,sizeof(rc));
    int ans=0;
    for(int i=0;i<l;i++)
    {
        if(c[i]=='Q')
        {
            ans++;
        }
        else if(c[i]=='A')
        {
            lc[i]=ans;
        }
    }
    ans=0;
    for(int i=l-1;i>=0;i--)
    {
        if(c[i]=='Q')
        {
            ans++;
        }
        else if(c[i]=='A')
        {
            rc[i]=ans;
        }
    }
    ans=0;
    for(int i=0;i<l;i++)
    {
        ans+=(lc[i]*rc[i]);
    }
    cout<<ans<<endl;
    return 0;
}
