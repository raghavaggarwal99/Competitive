class Solution {
public:
    int minimumSwap(string s, string t) {
        
         int cnt1=0,cnt2=0;
        
        
        for(int i=0;i<s.length();i++){
            
            if(s[i]=='x' and t[i]=='y') cnt1++;
            if(s[i]=='y' and t[i]=='x') cnt2++;
        }
        
        if(cnt1==0 and cnt2==0) return 0;
        
        
        if((cnt1 & 1) and !(cnt2 & 1)) return -1;
        
        
        if((cnt2 & 1) and !(cnt1 & 1)) return -1;
        
        
        int ans=cnt1/2 + cnt2/2 ;
        
        
        if(!(cnt1 & 1) and !(cnt2 & 1)) return ans;
        
        
        return ans+2;
        
        
        
    }
};
