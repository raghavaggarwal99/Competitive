int Solution::majorityElement(const vector<int> &A) {
    
    
    
    int n=A.size();
    unordered_map<int,int> x;
    
    for(int i=0; i<A.size(); i++){
        x[A[i]]++;
        
        if(x[A[i]]>floor(n/2)){
            return A[i];
        }
    }
    
    return 0;
    
    
}

