class Solution {
public:
    int numberOfSubarrays(vector<int>& a, int m) {
        
        
        int n=a.size();
        
        int count = 0; 

        vector<int> prefix(n,0);
        
        int odd = 0; 

        // traverse in the array 
        for (int i = 0; i < n; i++)  
        { 

            prefix[odd]++; 

            if (a[i] & 1) 
                odd++; 

            // when number of odd elements>=M 
            if (odd >= m) 
                count += prefix[odd - m]; 
        } 

        return count; 


        
        
        
        
        
        
        
        
        
        
        
        
    }
};
