class Solution {
public:
    bool isIsomorphic(string str1, string str2) {
        
        
        
    int m = str1.length(), n = str2.length(); 

    if (m != n) 
      return false; 
  
   
    bool marked[256] = {false}; 
  
   
    int map[256]; 
    memset(map, -1, sizeof(map)); 
  
    // Process all characters one by on 
    for (int i = 0; i < n; i++) 
    { 
       
        if (map[str1[i]] == -1) 
        { 
           
            if (marked[str2[i]] == true) 
                return false; 
  
            // Mark current character of str2 as visited 
            marked[str2[i]] = true; 
  
            // Store mapping of current characters 
            map[str1[i]] = str2[i]; 
        } 
  
       
        else if (map[str1[i]] != str2[i]) 
            return false; 
    } 
  
    return true; 
        
    }
};
