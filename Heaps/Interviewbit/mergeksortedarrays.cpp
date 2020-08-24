vector<int> Solution::solve(vector<vector<int> > &A) {
    
    vector<int> ans;
    
    // priority_queue <int> p; 
    
    
    for(int i=0; i<A.size(); i++){
        
        for(int j=0; j<A[i].size(); j++){
            ans.push_back(A[i][j]);
        }
        
    }
    
    sort(ans.begin(), ans.end());
    
    return ans;
    
    
}

