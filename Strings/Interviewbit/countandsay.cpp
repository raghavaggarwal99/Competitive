string Solution::countAndSay(int A) {
    
    
    if(A==1){
        return "1";
    }
    
    string s="1";
    string s2="";
    char v=s[0];
    int w=1;
    int count;
    while(A){
        count=0;
        
        for(int i=0; i<s.length(); i++){
             if(s[i]==v){
                 count++;
             }
             else{
                 s2+=to_string(count);
                 s2+=v;
                 v=s[i];
                 count=1;
             }
        }
        s2+=to_string(count);
        s2+=v;
        s=s2;
        v=s[0];
        s2.clear();
        w++;
        if(w==A){
            return s;
        }
        
    }
    
    
    
    
    
    
    
}

