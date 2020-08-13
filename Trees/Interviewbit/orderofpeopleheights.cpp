vector<int> Solution::order(vector<int> &A, vector<int> &B) {
    
    
    map<int,int> x;
    
    vector<int> ans(A.size(),-1);
    
    for(int i=0; i<A.size(); i++){
        x[A[i]]=B[i];
    }
    
    map<int,int> :: iterator it;
    
    for(it=x.begin(); it!=x.end(); it++){
        
        
        int i=0; 
        int j=0;
        
        while(i!=it->second){
            if(ans[j]==-1){
                i++;
            }
            j++;
        }
        
        while(ans[j]!=-1){
            j++;
        }
        
        // cout<<j<<endl;
        ans[j]=it->first;
        
    }
    
    return ans;
    
    
    
    
    
}

