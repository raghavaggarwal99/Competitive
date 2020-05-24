class Solution {
public:
    int threeSumClosest(vector<int>& a, int x) {
        
        sort(a.begin(), a.end()); 
  

        int closestSum = INT_MAX; 
  
        for (int i = 0; i < a.size() - 2; i++) { 
  
       
            int ptr1 = i + 1, ptr2 = a.size() - 1; 
  
       
            while (ptr1 < ptr2) { 
  
           
                int sum = a[i] + a[ptr1] + a[ptr2]; 

                if (abs(1LL*x - sum) < abs(1LL*x - closestSum)) { 
                    closestSum = sum; 
                } 

                if (sum > x) { 
                    ptr2--; 
                } 

              
                else { 
                    ptr1++; 
                } 
        } 
    } 
  
  
    return closestSum; 
        
        
        
        
        
        
        
        
        
        
        
        
        
    }
};



