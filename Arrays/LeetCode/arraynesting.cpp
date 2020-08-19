class Solution {
public:
    int arrayNesting(vector<int>& A) {
        
        int i=0;
        int start=0;
        int ans=0;
        set<int> s;   
        int count=0;
        
        unordered_map<int,int> x; 
        
        while(i<A.size()){
            
            int v=A[i];
            
            if(x[v]==0){
                x[v]=1;
                i=v;
                cout<<v<<endl;
                count++;
            }
            else{
                if(count> ans){
                    ans=count;
                }
                start+=1;
                i=start;
                count=0;
            }
  
            
        }
        
        
        
        return ans;
        
        
        
    }
};
