class Solution {
public:
    char findKthBit(int n, int k) {
        
        
        string s= "0";
        string ans="";
        
        if(n==1){
            return s[0];
        }
        
        
        for(int i=1; i<=n-1; i++){
            
            ans= s+"1";
            
            for(int j=0; j<s.length(); j++){
                if(s[j]=='0'){
                    s[j]='1';
                }
                else if(s[j]=='1'){
                    s[j]='0';
                }
            }
            // cout<<s<<endl;
            
            reverse(s.begin(), s.end());
            // cout<<d<<endl;
            
            ans=ans+s;
            s=ans;
            
            
        }
        
        // cout<<ans<<endl;
        
        return ans[k-1];
        
        
        
    }
};
