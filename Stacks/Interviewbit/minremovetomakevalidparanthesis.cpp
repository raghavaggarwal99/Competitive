class Solution {
public:
    string minRemoveToMakeValid(string A) {
        
        stack<int> s;
        
        
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
        
        
        if(s.size()==0){
            return A;
        }
        
        while(!s.empty()){
            A[s.top()]='.';
            // cout<<s.top()<<endl;
            s.pop();
        }
        
        int i=0;
        
        
        while(i<A.length()){
            if(A[i]=='.'){
                A.erase(i,1);
            }
            else{
                i++;
            }
            
        }
    
        
        
        return A;
        
        
        
    }
};
