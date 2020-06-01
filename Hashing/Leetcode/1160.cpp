class Solution {
public:
    int countCharacters(vector<string>& words, string chars) {
        
        unordered_map<char,int> x;
        
        int sum=0;
        
        for(int i=0; i<chars.length(); i++){
            x[chars[i]]++;
        }
        
        for(int i=0; i<words.size(); i++){
            string s=words[i];
            
            unordered_map<char,int> y;
            int check=0;
            
            for(int j=0; j<s.length(); j++){
             
                y[s[j]]++;
                
                if(y[s[j]]>x[s[j]]){
                    check=1;
                    break;
                }
                
            }
            if(check==0){
                sum+=s.length();
            }
            
        }
        
        
        return sum;
        
        
    }
};
