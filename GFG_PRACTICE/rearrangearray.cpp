#include<bits/stdc++.h>
using namespace std;

int main() {
	//code
	int t;
	cin>>t;
	while(t--)
	{
	    long long n,i,j;
	    cin>>n;
	    int a[n];
	    for(i=0;i<n;i++)
	         cin>>a[i];
	    i=0,j=n-1;
	    while(i<j)
	    {
	        cout<<a[j]<<" "<<a[i]<<" ";
	        i++;
	        j--;
	    }
	    if(n%2!=0)
	      cout<<a[i];
	    cout<<"\n";
	}
	return 0;
}
