string Solution::addBinary(string A, string B) {
    

    string ans="";

    int n=A.length()-1;
    int m=B.length()-1;
      int carry=0;
    
    while(n>=0 && m>=0){
    
        
        char c1=A[n];
        char c2=B[m];
        
        if(c1=='0' && c2=='0'){
            if(carry==1){
                 ans+="1";
                 carry=0;
            }
            else{
                ans+="0";
                carry=0;
            }
       
        }
        if(c1=='0' && c2=='1'){
            
            if(carry==1){
                 ans+="0";
                 carry=1;
            }
            else{
                ans+="1";
                carry=0;
            }
        
        }
        if(c1=='1' && c2=='0'){
            
            if(carry==1){
                 ans+="0";
                 carry=1;
            }
            else{
                ans+="1";
                carry=0;
            }
           
            
        }
        if(c1=='1' && c2=='1'){
            
            if(carry==1){
                 ans+="1";
                 carry=1;
            }
            else{
                ans+="0";
                carry=1;
            }
        }
        
        n--;
        m--;
        
        
    }
    
    // cout<<n<<" "<<m<<endl;
    
    while(n>=0){
        
        char c1=A[n];
        if(c1=='0'){
            if(carry==1){
                ans+="1";
                carry=0;
            }
            else{
               ans+="0";
                carry=0; 
            }
        }
        else{
            if(carry==1){
                ans+="0";
                carry=1;
            }
            else{
               ans+="1";
                carry=0; 
            } 
        }
        n--;
    }
    
    while(m>=0){
        
        char c1=B[m];
        
        if(c1=='0'){
            if(carry==1){
                ans+="1";
                carry=0;
            }
            else{
                ans+="0";
                carry=0; 
            }
        }
        else{
            if(carry==1){
                ans+="0";
                carry=1;
            }
            else{
               ans+="1";
                carry=0; 
            } 
        }
        
        m--;
    }
    
    
    if(carry==1){
        ans+="1";
    }
    
    reverse(ans.begin(), ans.end());
    
    return ans;
    
    
    
}

