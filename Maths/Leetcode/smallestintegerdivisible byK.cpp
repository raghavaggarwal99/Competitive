class Solution {
public:
    int smallestRepunitDivByK(int K) {
        
        
        if (K % 2 == 0 || K % 5 == 0) 
        return -1; 
  
            int number = 0; 

            int len = 1; 

            for (len = 1; len <= K; len++) { 

                // Instead of generating all possible numbers 
                // 1, 11, 111, 111, ..., K 1's 
                // Take remainder with K 
                number = (number * 10 + 1) % K; 

                // If number is divisible by k 
                // then remainder will be 0 
                if (number == 0) 
                    return len; 
            } 

            return -1; 
        
        
        
    }
};
