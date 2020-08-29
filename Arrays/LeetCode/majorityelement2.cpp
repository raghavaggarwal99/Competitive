class Solution {
public:
    vector<int> majorityElement(vector<int>& A) {
        
        
        int count1=0;
        int count2=0;
        
        int first=-1;
        int second=-1;
        
        int n=A.size();
        
        for(int i=0; i<n; i++){
            
            if(A[i]==first){
                count1++;
                
            }
            else if(A[i]==second){
                count2++;
                
            }
            
            else if(count1==0){
                first=A[i];
                count1++;
                
            }
            else if(count2==0){
                second=A[i];
                count2++;
                
            }
            else { 
                count1--; 
                count2--; 
            } 
            
            
        }
        
        count1=0;
        count2=0;
        
         for(int i=0; i<n; i++){
            
            if(A[i]==first){
                count1++;
                
            }
            else if(A[i]==second){
                count2++;
                
            }
            
        }
        
        vector<int> ans;
        
        if(count1>n/3){
            ans.push_back(first);
   
        }
        
        if(count2>n/3){
             ans.push_back(second);
        }
        
        return ans;
        
        
        
        
        
        
        
    }
};
