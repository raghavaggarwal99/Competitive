int Solution::solve(const vector<int> &A) {
    
    
    int ans = 2; 
    int n = A.size(); 
    
    vector<int> B=A;
    
    if (n <= 2) 
        return n; 
  
    vector<int> llap(n, 2); 
  
    sort(B.begin(), B.end()); 
  
    for (int j = n - 2; j >= 0; j--) 
    { 
        int i = j - 1; 
        int k = j + 1; 
        while (i >= 0 && k < n) 
        { 
            if (B[i] + B[k] == 2 * B[j]) 
            { 
                llap[j] = max(llap[k] + 1, llap[j]); 
                ans = max(ans, llap[j]); 
                i -= 1; 
                k += 1; 
            } 
            else if (B[i] + B[k] < 2 * B[j]) 
                k += 1; 
            else
                i -= 1; 
        } 
    } 
    return ans; 
    
    
    
    
}

