#include<bits/stdc++.h>
using namespace std;
unsigned long long int a[43];
 
void pre()
{
	a[0]=0;
	a[1]=1;
 
	for(int i=2;i<=42;i++){
		a[i]=a[i-1]+a[i-2];
	}
}

 
string findval(int n)
{
	if(n==1)
	return "1";

	string s="";

	int f=0;

	for(int i=42;i>=2;i--)
	{
		if(a[i]<=n)
		{
			f=1;
			s+="1";
			n-=a[i];
 
			continue;
		}
		if(f)
		s+="0";
	}
	return s;
}
 
int main()
{
	
	int t;
	cin>>t;
	pre();

	while(t--)
	{
		int n;
		cin>>n;
		cout<<findval(n)<<"\n";
	}
	return 0;
}
