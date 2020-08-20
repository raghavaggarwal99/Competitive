class Solution {
public:
    int maxChunksToSorted(vector<int>& A) {
        
          int n=A.size();

        vector<int> B=A;
        
        int ans=0;
        
        sort(B.begin(), B.end());
        
//         for(int i=0; i<n; i++){
//             cout<<B[i]<<" ";
//         }
        
        // cout<<endl;

        unordered_map<int,int> count;
        int zero=0;
        
        for(int i=0; i<n; i++){
            
            // cout<<A[i]<<endl;
            
            count[A[i]]+=1;
            
            if(count[A[i]]==1){
                zero+=1;
            }
            
             if(count[A[i]]==0){
                zero-=1;
            }
            
            
            count[B[i]]-=1;
            
            if(count[B[i]]==-1){
                zero+=1;
            }
            
            if(count[B[i]]==0){
                zero-=1;
            }
            
            if(zero==0){
                ans+=1;
            }
            
            
        }
        
        return ans;
        
        
        
    }
};
