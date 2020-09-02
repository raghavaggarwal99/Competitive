class Solution {
public:
    
    int minAddToMakeValid(string A) {
        
        
        stack<int> s;
        // int count=0;
        
        
        
        for(int i=0; i<A.length(); i++){
            
            
            if(A[i]=='('){
                
                s.push(i);
                
            }
            else if(A[i]==')'){
                
                if(s.size()!=0){
                    if(A[s.top()]=='('){
                        s.pop();
                    }
                    else{
                        s.push(i);
                    }
                }
                else{
                    s.push(i);
                }
                
            }
            
        }
        
        
        return s.size();
        
    }
};



