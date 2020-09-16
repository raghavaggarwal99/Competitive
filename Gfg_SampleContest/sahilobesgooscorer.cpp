#include <iostream>
using namespace std;

int main() {
	//code
	
	int t;
	cin>>t;
	
	for(int w=0; w<t; w++){
	    
	    int n,m;
	    cin>>n>>m;
	    int sum1=0;
	    int sum2=0;
	    
	    int a,b;
	    
	    for(int i=0; i<n; i++){
	        cin>>a;
	        sum1+=a;
	    }
	    
	    
	    for(int i=0; i<m; i++){
	        cin>>b;
	        sum2+=b;
	    }
	    
	    
	    if(sum1>sum2){
	        cout<<"C1"<<endl;
	    }
	    else{
	        cout<<"C2"<<endl;
	    }
	    
	    
	    
	    
	    
	}
	
	
	
	return 0;
}
