class Solution {
public:
    int longestConsecutive(vector<int>& A) {
        
        int n=A.size();
        
        
        if(n==0){
            return 0;
        }
         if(n==1){
            return 1;
        }
        
        map<int,int> x;
        
        int min1=INT_MAX;
        int max1=INT_MIN;
        
        
        for(int i=0; i<n; i++){
            
            x[A[i]]++;
            
            min1=min(min1, A[i]);
            max1=max(max1, A[i]);
            
        }
        int ans=0;
        int count=0;
        
        map<int,int> :: iterator it;
        
        for(it = x.begin(); it!=x.end(); ++it){
            
            int v= it->first;
            cout<<v<<endl;
            
            if(x[v-1]>0){
                count++;
            }
            else{
                count=0;
            }
            
            ans=max(ans, count);
        
            

        }
        
//         for(int i=min1+1; i<=max1; i++){
            
            
//             if(x[i]>0 && x[i-1]>0){
//                 count++;
//             }
//             else{
//                 count=0;
//             }
            
//             ans=max(ans, count);
            
//         }
        
        return ans+1;
        
        
    }
};
