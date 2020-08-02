string Solution::fractionToDecimal(int numerator, int denominator) {
    
    
    if (numerator == 0)
        return "0";
        
    long long int n = numerator, d = denominator;
    
    string res = "";
    
   if(n<0 && d>0){
       res+='-';
   }
    if(n>0 && d<0){
       res+='-';
   }
   
    n = abs(n), d = abs(d);
    
    res += to_string(n/d);
    
    long long int rem = n%d;
    
    if (rem == 0)
        return res;
        
    
    res += '.';
    
    unordered_map<int, int> m;
    
    while(1)
    {   
        // cout<<rem<<" ";
        if (m[rem]!=0)
        {
            res.insert(m[rem], 1, '(');
            // cout<<res<<" ";
            
            res.push_back(')');
            break;
        }
        
        m[rem] = res.size();
        rem *= 10;
        res+=(to_string(rem/d));
        
        rem=rem%d;
        if(rem==0){
            break;
        }
    }
    
    
    
    return res;
    
}

