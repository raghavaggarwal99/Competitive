string Solution::solve(string A) {
    
    
    string ans="";
    
    unordered_map<char,int> x;
    
    vector<char> temp;
    
    ans+=A[0];
    x[A[0]]=1;
    
    temp.push_back(A[0]);
    
    for(int i=1; i<A.length(); i++){
        
        x[A[i]]++;
        
        if(temp.size()==0){
            if(x[A[i]]==1){
                temp.push_back(A[i]);
                ans+=A[i];
            }
            else{
               ans+="#"; 
            }
        }
        else{
            
            char b=temp[0];
            
            if(x[A[i]]==1){
                temp.push_back(A[i]);
            }
            
            if(x[b]==1){
                ans+=b;
            }
            else{
                while(1){
                    
                    if(temp.size()==0){
                        ans+="#";
                        break;
                    }
                    
                    if(x[*temp.begin()]==1){
                        ans+=*temp.begin();
                        break;
                    }
                    
                    temp.erase(temp.begin());
                    
                }
            }
            
            
            
            
        }
    
        
        
        
        
    }
    
    return ans;
    
    
    
    
    
}

