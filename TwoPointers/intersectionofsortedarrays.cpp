vector<int> Solution::intersect(const vector<int> &A, const vector<int> &B) {
    
    
    
    vector<int> ans;
    int i=0; 
    int j=0;
    
    while(i<A.size() || j<B.size()){
        if(i==A.size() || j==B.size()){
            break;
        }
        if(A[i]<B[j]){
            i++;
        }
        else if(A[i]>B[j]){
            j++;
        }
        else{
            ans.push_back(A[i]);
            i++;
            j++;
        }
        
        
    }
    
    return ans;
    
    
    
    
    
    
    
    
    
    
    
    
}

