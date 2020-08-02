class Solution {
public:
    int numOfSubarrays(vector<int>& a, int k, int threshold) {
        
        
        int n=a.size();
        
        long long int *sum=new long long int[n+1];
        sum[0]=0;
        
        for(int i=0; i<n; i++){
            sum[i+1]=a[i]+sum[i];
        }
        
        
        
        for(int i=0; i<=n; i++){
            cout<<sum[i]<<" ";
        }
        
        long long int start=0;
        
        long long int ans=0;
        // cout<<endl;
        
        for(int i=k; i<=n; i++){
            
            int v=sum[i]-sum[start];
            // cout<<v<<endl;
            
            if(v/k>=threshold){
                ans++;
            }
            
            start++;
            
            
        }
        
        
        return ans;
        
        
        
    }
};
