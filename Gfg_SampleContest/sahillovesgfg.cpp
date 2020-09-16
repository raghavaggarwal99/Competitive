#include <iostream>
using namespace std;

int main() {
	//code
	int t;
	cin>>t;
	
	for(int w=0; w<t; w++){
	    
	    
	    string s;
	    cin>>s;
	    
	    int count=0;
	    
	    if(s.length()<3){
	        cout<<"-1"<<endl;
	    }
	    else{
    	    for(int i=0; i<=s.length()-3; i++){
    	        
    	        string temp= s.substr(i,3);
    	        
    	        if(temp=="gfg"){
    	            count++;
    	        }
    	        
    	        
    	    }
    	    if(count==0){
    	         cout<<"-1"<<endl;
    	    }
    	    else{
    	     cout<<count<<endl;
    	    }
	    }
	    
	  
	    
	    
	    
	    
	}
	
	
	
	
	return 0;
}
