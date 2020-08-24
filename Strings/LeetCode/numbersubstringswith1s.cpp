class Solution {
public:
    int numSub(string s) {
        
        
        long long int ans=0;
        
        long long int count=0;
        
        long long mod=pow(10,9) + 7;
        
        for(int i=0; i<s.size(); i++){
            
            if(s[i]=='1'){
                count++;
                ans=(ans+count)%mod;
            }
            else{
                count=0;
            }
            
        }
        
        
        return ans%mod;
        
        
        
        
        
    }
};
