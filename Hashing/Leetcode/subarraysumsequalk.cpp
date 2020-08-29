class Solution {
public:
    int subarraySum(vector<int>& A, int sum) {
        
        
        
    unordered_map<int, int> prevSum; 
  
    int res = 0; 
  
    int n=A.size();
        
    int currsum = 0; 
  
    for (int i = 0; i < n; i++) { 
  
       
        currsum += A[i]; 
  
        if (currsum == sum) 
            res++; 
  
        if (prevSum.find(currsum - sum) != prevSum.end()) 
            res += (prevSum[currsum - sum]); 
  
        
      
        prevSum[currsum]++; 
    } 
  
    return res; 
        
        
        
    }
};
