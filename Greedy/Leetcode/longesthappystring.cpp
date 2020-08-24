class Solution {
public:
    string longestDiverseString(int a, int b, int c) {
        
        
            string ans;
        
            int total = a + b + c;
            int currA = 0, currB = 0, currC = 0;

        
            for (int i = 0; i < total; i++)
            {
                if ((a >= b && a >= c && currA !=2) || (a> 0 && (currB ==2 || currC ==2)))
                {
                    ans+="a";
                    currA++;
                    currB = 0;
                    currC = 0;
                    a--;
                }
                else if ((b >= a && b >= c && currB != 2) || (b > 0 && (currA == 2 || currC == 2)))
                {
                    ans+="b";
                    currB++;
                    currA = 0;
                    currC = 0;
                    b--;
                }
                
                else if ((c >= b && c >= a && currC != 2) || (c > 0 && (currB == 2 || currA == 2)))
                {
                    ans+="c";
                    currC++;
                    currA = 0;
                    currB = 0;
                    c--;
                }
                
                // cout<<ans<<endl;

            }
        
        
            return ans;
        
        
        
    }
};
