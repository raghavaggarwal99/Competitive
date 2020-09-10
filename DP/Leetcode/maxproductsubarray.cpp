class Solution {
public:
    int maxProduct(vector<int>& arr) {
        
        
       int n=arr.size();
    
    int max_fwd = INT_MIN, max_bkd = INT_MIN; 
  

    int max_till_now = 1; 
  
   
    bool isZero=false; 
      
  
    for (int i=0; i<n; i++) 
    { 
        
        max_till_now = max_till_now*arr[i]; 
        
        if (max_till_now == 0) 
        {    
             isZero=true; 
             max_till_now = 1; 
            continue; 
        } 
        if (max_fwd < max_till_now){
            max_fwd = max_till_now; 
        }
    } 
  
     max_till_now = 1; 
        
        
        
     for (int i=n-1; i>=0; i--) 
    { 
        max_till_now = max_till_now * arr[i]; 
        if (max_till_now == 0) 
        { 
            isZero=true; 
            max_till_now = 1; 
            continue; 
        } 
  
        // update max_bkd 
        if (max_bkd < max_till_now) 
            max_bkd = max_till_now; 
    } 
  
  
    int res =  max(max_fwd, max_bkd); 
  
  
    if(isZero) 
    return max(res, 0); 
  
    return res; 
    
        
        
        
        
        
        
        
        
        
    }
};
