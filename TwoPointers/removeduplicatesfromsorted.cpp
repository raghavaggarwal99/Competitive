int Solution::removeDuplicates(vector<int> &A) {
  
    
    unordered_map<int,int> x;
    int count=0;
    for(int i=0; i<A.size(); i++){
        
        if(x[A[i]]==0){
            x[A[i]]++;
        }
        else{
            count++;
            A[i]=-1;
        }
        
    }
    
    sort(A.begin(), A.end(), greater<int>());
    
    
    for(int i=0; i<count; i++){
        A.pop_back();
    }
    
    sort(A.begin(),A.end());
    
    return A.size();
    
    
    
    
}

