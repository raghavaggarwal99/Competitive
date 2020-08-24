class Solution {
public:
    int monotoneIncreasingDigits(int N) {
        
        
        int base = 1;
        
        int ans = N;
        
        int last = 9;
        
        int ret = ans;
        
        while (ans) {
            
            if (ans % 10 > last) {
                ret = (ans / 10 * 10 + ans % 10 - 1) * base + base - 1;
                last = ans % 10 - 1; 
                
            } 
            else {
                last = ans % 10;
            }
            
            ans /= 10;
            
            if (ans)  base *= 10;
            
            cout << ret << endl;
            
        }
        
        
        return ret;
        
        
    }
};
