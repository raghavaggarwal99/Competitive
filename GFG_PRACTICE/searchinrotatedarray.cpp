#include <iostream>
using namespace std;


int main() {
	int T,K,N;
	cin>>T;
	while(T--)
	{
	    cin>>N;
	    int A[N],flag=-1;
	    for(int i=0;i<N;i++)
	      cin>>A[i];
	    cin>>K;
	    for(int i=0;i<N;i++)
	      if(A[i]==K)
	      {  cout<<i<<"\n";
	         flag=0;
	         break;
	      }
	    if(flag==-1)
	      cout<<flag<<"\n";
	}
	    
	return 0;
}
