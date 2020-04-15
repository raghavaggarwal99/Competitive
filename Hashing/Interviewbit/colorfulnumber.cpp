int Solution::colorful(int A) {
    
    
    vector<int> v;
    
    while(A){
        v.push_back(A%10);
        A=A/10;
    }
    
    unordered_map<int,int> x;
    
    for(int i=0; i<v.size(); i++){
        
        if(x[v[i]]==1){
            return 0;
        }
        x[v[i]]=1;
        long long int b=v[i];
        for(int j=i+1; j<v.size(); j++){
            b*=v[j];
            
             if(x[b]==1){
                return 0;
            }
            x[b]=1;
            
            
        }
        
        
    }
    
    return 1;
    
    
    
    
    
}

