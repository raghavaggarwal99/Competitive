class Solution {
public:
    string makeGood(string s) {
        
        
        int n=s.length()-1;
        
        int start=0;
        
        while(1){
            
            if(s.length()==0){
                break;
            }
            
            if(start+1>n){
                break;
            }
            
            if(start<0 && start+1<=n){
                start=0;
            }
            
            if(s[start+1]==toupper(s[start]) && s[start]!=s[start+1]){
                // cout<<"sgfer  " << s[start]<<endl;
                s.erase(start, 2);
                start--;
                // n-=2;
            }
            else if(s[start+1]==tolower(s[start]) && s[start]!=s[start+1]){
                // cout<<"sgfer  " << s[start]<<endl;
                s.erase(start, 2);
                start--;
                // n-=2;
            }
            else{
                start++;
            }
            
            // cout<<start<<endl;
            // cout<<s<<endl;
            
            
        }
        
        return s;
        
        
        
        
        
    }
};
