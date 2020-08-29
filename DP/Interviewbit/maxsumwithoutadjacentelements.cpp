int Solution::adjacent(vector<vector<int> > &grid) {
    
    int n=grid[0].size();
    
   int incl = max(grid[0][0], grid[1][0]); 
  

    int excl = 0, excl_new; 
  
    // Traverse for further elements 
    for (int i = 1; i<n; i++ ) 
    { 
        // Update max_sum on including or excluding 
        // of previous column 
        excl_new = max(excl, incl); 
  
        // Include current column. Add maximum element 
        // from both row of current column 
        incl = excl + max(grid[0][i], grid[1][i]); 
  
        // If current column doesn't to be included 
        excl = excl_new; 
        
    } 
  
 
    return max(excl, incl); 
    
    
    
    
    
    
    
}

