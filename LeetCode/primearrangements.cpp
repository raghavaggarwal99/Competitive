class Solution {
public:
    
            bool isPrime(int n) 
        { 
            
            if (n <= 1) 
                return false; 

            // Check from 2 to n-1 
            for (int i = 2; i < n; i++) 
                if (n % i == 0) 
                    return false; 

            return true; 
        } 
    
    int numPrimeArrangements(int n) {
        
        long long int mod=pow(10,9) + 7;
        
        int count=0;
        
        for (int i = 2; i <= n; i++) { 
            if (isPrime(i)) 
                count++;
        } 
        
        
        
        unsigned long long factorial = 1;
        
         for(int i = 1; i <=count; ++i)
        {
                factorial = (factorial*i)%mod;
        }
        factorial=factorial%mod;
        
        
        
        
        
         unsigned long long factorial2 = 1;
        
        count=n-count;
        
         for(int i = 1; i <=count; ++i)
        {
                factorial2 = (factorial2*i)%mod;
        }
        
        factorial2=factorial2%mod;
        
        cout<<factorial<<endl;
        cout<<factorial2<<endl;
        
        return (factorial*factorial2)%mod;


        
    }
};
