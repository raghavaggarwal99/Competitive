vector<int> Solution::solve(vector<int> &A, int B) {
    
    sort(A.begin(), A.end());
    
    vector<int> ans;
    
    int n=A.size();
    
    for(int i=n-1; i>=n-B; i--){
        
        ans.push_back(A[i]);
        
        
    }
    
    return ans;
    
    
    
}

