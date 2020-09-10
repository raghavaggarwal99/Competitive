class Solution {
public:
    int countSubstrings(string str) {
        
        
        int n = str.size(); 
  
        if(n==0){
            return 0;
        }

        bool table[n][n]; 

        memset(table, 0, sizeof(table)); 


        int maxLength = 1; 

        int count=0;
        
        for (int i = 0; i < n; ++i){
            table[i][i] = true; 
            count++;
        }


        int start = 0; 

        for (int i = 0; i < n - 1; ++i) { 
            if (str[i] == str[i + 1]) { 
                table[i][i + 1] = true; 
                start = i; 
                maxLength = 2; 
                count++;
            } 
        } 


        for (int k = 3; k <= n; ++k) { 

            for (int i = 0; i < n - k + 1; ++i) { 

                int j = i + k - 1; 


                if (table[i + 1][j - 1] && str[i] == str[j]) { 
                    table[i][j] = true; 

                    if (k > maxLength) { 
                        start = i; 
                        maxLength = k; 
                    } 
                    
                    count++;
                } 
            } 
        } 


          return count;


        
        
        
        
        
    }
};
