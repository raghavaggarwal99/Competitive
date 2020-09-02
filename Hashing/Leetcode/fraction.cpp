class Solution {
public:
    string fractionToDecimal(int ni, int di) {
        
        if(ni==0){
            return "0";
        }
        
        
        string res="";
        
        long long int n=ni;
        
         long long int d=di;
        
        if(n>0 && d<0){
            res+='-';
        }
        
        else if(n<0 && d>0){
            res+='-';
        }
        
        n=abs(n);
        d=abs(d);
        
        res+=to_string(n/d);
        
         long long int rem = n%d;
    
        if (rem == 0)
            return res;
        
        
        res+='.';
        
        
        unordered_map<int,int> x;
        
        
        while(1){
            
            
            if(x[rem]!=0){
                
                res.insert(x[rem],1,'(');
                
                res+=')';
                break;

                
            }
            
            x[rem]=res.size();
            rem*=10;
            
            res+=(to_string(rem/d));
            
            rem=rem%d;
            
            if(rem==0){
                break;
            }
        
            
        }
        
        
        return res;
        
        
        
        
        
    }
};
