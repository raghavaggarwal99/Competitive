int Solution::searchMatrix(vector<vector<int> > &A, int B) {
    
    unordered_map<int,int> x;
   
   
    int median;
    for(int i=0;i<A.size();i++)
        {
        for(int j=0;j<A[0].size();j++)
        {
            x[A[i][j]]=1;
        }
    }
    
  if(x[B]==1){
      return 1;
  }
  
  return 0;
    
    
    
    
    
    
    
    
    
}

    
    

