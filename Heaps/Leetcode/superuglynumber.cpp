class Solution {
public:
    int nthSuperUglyNumber(int n, vector<int>& A) {
        
        
           

        set<unsigned long long int>s;
        
        unsigned long long int x;
        
        s.insert(1);
        
        while(n--)
        {
            x=*s.begin();
            s.erase(s.begin());
            
            for(auto it:A)
            {
                if(x*it<=INT_MAX)
                s.insert(x*it);
                else
                break;
            }
            
        }
        return x;
       
        
        
        
        
        
    }
};
