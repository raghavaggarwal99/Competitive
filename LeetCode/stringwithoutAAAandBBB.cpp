class Solution {
public:
    string strWithout3a3b(int A, int B) {
        
        string ans="";
        
       while (A > 0 || B > 0) {
            bool writeA = false;
           
            int L = ans.length();
           
            if (L >= 2 && ans[L-1] == ans[L-2]) {
                if ( ans[L-1] == 'b')
                    writeA = true;
            } else {
                if (A >= B)
                    writeA = true;
            }

            if (writeA) {
                A--;
               ans+="a";
            } else {
                B--;
                ans+="b";
            }
        }

        return ans;
        
        
    }
};
