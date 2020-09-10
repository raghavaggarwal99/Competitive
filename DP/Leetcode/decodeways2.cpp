class Solution {
public:
    int numDecodings(string s) {
        
         vector<int> dp(s.length()+1, 0);
        
        const unsigned int m = 1000000007;
        
        dp[0] = 1;
        dp[1] = s[0] == '0' ? 0 : 1;
        
        if(s[0] == '*'){
            dp[1] = 9;
        }
        
        for(int i=2; i<=s.length(); i++){
            
            
            //one digit
            if(s[i-1]  == '*'){
                dp[i] = dp[i-1] * 9;
            } 
            
            else if(s[i-1] >= '1'){
                dp[i] = dp[i-1];
            }
            
            dp[i] = dp[i] %  m;
            
            //two digit
            if(s[i-2] == '1' && s[i-1] == '*')
            {
				/* 11,12...19*/
                dp[i] += dp[i-2] * 9; 
            }
            
            else if(s[i-2] == '2' && s[i-1] == '*'){
                /* 21,22,23,24,25,26 */
                dp[i] += dp[i-2] * 6;
            }
            
            else if(s[i-1] == '*' && s[i-2] == '*'){
                /* 11 - 19 , 21 - 26 */
                dp[i] += dp[i-2] * 15;
            }
            
            else if(s[i-2] == '*' && s[i-1] <= '6'){
                /* 11,21 - 12,22 - 13,23 - 14,24 .. 16, 26 */
                dp[i] += dp[i-2] * 2;
            }
            
            
            else if(s[i-2] == '*' && s[i-1] >= '7'){
                /* 17 .... 19 */
                dp[i] += dp[i-2];
            }
            
            
            else if((s[i-2] =='1' && s[i-1] != '*') || (s[i-2] =='2' && s[i-1] <= '6')){
                dp[i] += dp[i-2] ;
            }
            
            
            
            dp[i] = dp[i] %  m;
            
        }
        
        for(int i= 0 ; i < dp.size(); i++){
            cout<< dp[i] <<" ";
        }
        
        return dp[s.length()];
        
        
    }
};
