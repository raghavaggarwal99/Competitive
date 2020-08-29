class Solution {
public:
    int atMostK(vector<int>& arr, int n, int k) 
    { 

      
        int count = 0; 

        int left = 0; 

       
        int right = 0; 

     
        map<int,int> map; 
      
        while (right < n) { 

           
            if (map.find(arr[right])==map.end()) 
                map[arr[right]]=0; 
            map[arr[right]]++; 

          
            while (map.size() > k) { 
                map[arr[left]]= map[arr[left]] - 1; 
                if (map[arr[left]] == 0) 
                    map.erase(arr[left]); 
                left++; 
            } 

            
            count += right - left + 1; 
            right++; 
        } 
        return count; 
    } 
  

    int exactlyK(vector<int>& arr, int n, int k) 
    { 


        return (atMostK(arr, n, k) - atMostK(arr, n, k - 1)); 
    } 
  
    
    
    
    int subarraysWithKDistinct(vector<int>& A, int K) {
        
        return exactlyK(A, A.size(), K);
        
        
    }
};
