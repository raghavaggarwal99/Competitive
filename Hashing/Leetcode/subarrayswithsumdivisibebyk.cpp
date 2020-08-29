class Solution {
public:
    int subarraysDivByK(vector<int>& A, int k) {
        
        
        
        int mod[k]; 
        
        memset(mod, 0, sizeof(mod)); 
  
        int n=A.size();
        
        int cumSum = 0; 
        
        for (int i = 0; i < n; i++) { 
            cumSum += A[i]; 

           
            mod[((cumSum % k) + k) % k]++; 
        } 

        int result = 0;

       
        for (int i = 0; i < k; i++){

            if (mod[i] > 1) 
                result += (mod[i] * (mod[i] - 1)) / 2; 
        }


        result += mod[0]; 

        return result; 
        
        
        
        
        
        
    }
};
