#include <iostream>
 
using namespace std;
 
int main()
{
    long long int n;
    cin>>n;
    
    char *a= new char[n];
    char *b= new char[n];
    
    int *c= new int[n];
   // unordered_map<char,int> x;
    
    for(long long int i=0; i<n; i++){
        cin>>a[i];
        
       
    }
    
    
    long long int j=0;
    
    for( long long int i=0; i<n; i++){
        
        cin>>b[i];
        if(a[i]=='1' && b[i]=='0'){
            
            c[j]=i;
            j++;
        }
        else if(a[i]=='0' && b[i]=='1'){
          
            c[j]=i;
            j++;
        }
        
    }
    
    if(n==1){
        if(a[0]!=b[0]){
            cout<<"1"<<endl;
        }
        else{
            cout<<"0"<<endl;
        }
        return 0;
    }
    //cout<<j<<endl;
  
  if(j==0){
      cout<<"0"<<endl;
      return 0;
  }
  
  
    long long int ans=0;
     long long int i=0;
    while(1){
        
        if((c[i+1]==c[i]+1)  && (a[c[i]]!=a[c[i+1]])){
            
            ans+=1;
            i+=2;
            
           // continue;
        }
        else{
            ans+=1;
            i+=1;
        }
        
        if(i>=j){
            break;
        }
    }
    
    cout<<ans<<endl;
    return 0;
}
