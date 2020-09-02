string Solution::longestPalindrome(string str) {
    
    int n = str.size(); 
  
    
    bool table[n][n]; 
  
    memset(table, 0, sizeof(table)); 
  
    // All substrings of length 1 
    // are palindromes 
    int maxLength = 1; 
  
    for (int i = 0; i < n; ++i) 
        table[i][i] = true; 
  
    // check for sub-string of length 2. 
    int start = 0; 
    for (int i = 0; i < n - 1; ++i) { 
        if (str[i] == str[i + 1]) { 
            table[i][i + 1] = true; 
            start = i; 
            maxLength = 2; 
        } 
    } 
  
 
    for (int k = 3; k <= n; ++k) { 
        // Fix the starting index 
        for (int i = 0; i < n - k + 1; ++i) { 
           
            int j = i + k - 1; 
  
            if (table[i + 1][j - 1] && str[i] == str[j]) { 
                table[i][j] = true; 
  
                if (k > maxLength) { 
                    start = i; 
                    maxLength = k; 
                } 
            } 
        } 
    } 
    
    string ans="";
    
    for (int i = start; i <= start + maxLength - 1; ++i) 
        ans+=str[i]; 
    
    return ans;
  
    
    
    
    
}

