vector<int> Solution::solve(vector<int> &A) {
    
    int n=A.size();
    int v =  A[n-1]; 
    
    vector<int> ans;
      
    
    ans.push_back(v);
  
   
      
    for (int i = n-2; i >= 0; i--) 
    { 
       if(A[i]>v){
           v=A[i];
           ans.push_back(A[i]);
       }
    }     
    
    
    return ans;
    
    
    
    
    
    
}

