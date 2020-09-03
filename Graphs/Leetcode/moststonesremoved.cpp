class Solution {
public:
    
    vector<int> a;
    vector<int> count;
    
    int find(int x){
        
        if(a[x]==-1){
            return x;
        }
        
        return find(a[x]);
    
    }
    
    void uni(int x,int y){
        
        int u=find(x);
        int v=find(y);
        
        if(u==v)return;
        
        a[u]=v;
        
        count[v]+=count[u];
        
    }
    
    
    int removeStones(vector<vector<int>>& stones) {
        
        int n=stones.size();
        
        
        a=vector<int>(n,-1);
        
        count=vector<int>(n,1);
        
        for(int i=0;i+1<n;i++){
            for(int j=i+1;j<n;j++){
                
                if(stones[i][0]==stones[j][0] || stones[i][1]==stones[j][1]){
                    uni(i,j);
                }
            }
        }
        
        
        
        int ans=0;
        for(int i=0;i<n;i++){
            
            if(a[i]==-1){
                ans+=count[i]-1;
            }
        }
        
        return ans;
    }
    
 
};

