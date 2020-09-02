class Solution {
public:
    bool validateStackSequences(vector<int>& A, vector<int>& B) {
        
        
        int i=0;
        int j=0;
        
        if(A.size()!=B.size()){
            return 0;
        }
        
        if(A.size()==0){
            return 1;
        }
        
        if(A.size()==1){
            if(A[0]==B[0]){
                return 1;
            }
            else{
                return 0;
            }
            
        }
        
        
        stack<int> s;
        
        s.push(A[i]);
        i++;
        
       while(j<B.size()){
           
           if(!s.empty()){
               if(s.top()==B[j]){
                   s.pop();
                   j++;
               }
                else if(i<A.size()){
                   s.push(A[i]);
                   i++;
                }
               else{
                    return 0;
                }
           }

           else if(i<A.size()){
               s.push(A[i]);
               i++;
           }
           else{
               return 0;
           }
           
           
       }
        
        
        return 1;
        
        
        
    }
};
