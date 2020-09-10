class Solution {
public:
    
    int power(long long int x, long long int a) 
    { 
        long long int res = 1; 
        while (a) 
        { 
            if (a & 1) 
                res = res * x; 
            x = x * x; 
            a >>= 1; 
        } 
        return res; 
    } 
    
    int integerBreak(int N) {
        
        
        if (N == 2) 
        return 1; 
  
    //  base case 3 = 2 + 1 
    if (N == 3) 
        return 2; 
  
    int maxProduct; 
  

    switch (N % 3) 
    { 
        
        case 0: 
            maxProduct = power(3, N/3); 
            break; 
  
      
        case 1: 
            maxProduct = 2 * 2 * power(3, (N/3) - 1); 
            break; 
  
     
        case 2: 
            maxProduct = 2 * power(3, N/3); 
            break; 
    } 
        
        
    return maxProduct; 
        
        
        
    }
};
