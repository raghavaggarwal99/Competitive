#include <iostream>
#include <cstring>
#include <cstdio>
#include <algorithm>
using namespace std;
typedef long long ll;
 
const int maxn =1e5+100;
 
ll n;
ll ans=1e18;
ll num[]={0,2,3,5,7,11,13,17,19,23,29};
 
void fin(ll v,ll nn,ll p)
{
	if(nn>n)
	{
		return ;	
	}
	if(nn==n)
	{
		if(v<ans)
			ans=v;
		return ;
	}
	for(int i=1;i<=64;i++)
	{
		v*=num[p];
		if(v>=ans) break;
		if(nn<n)
		{
			fin(v,nn*(i+1),p+1);
		}
	}
}
int main()
{
	scanf("%lld",&n);
	if(n==1)
	{
		printf("1\n");
		return 0;
	}
	fin(1ll,1ll,1ll);
	printf("%lld\n",ans);
	return 0;
}
