#define vi vector<int>
#define pb push_back
class Solution {
public:
    
    int find(int x,vi p){
        if(p[x]==x)
            return x;
        else
            return find(p[x],p);
    }
    
    
    void Union(int x,int y,vi &p){
        
        int xx=find(x,p);
        
        int yy=find(y,p);
        
        p[xx]=yy;
    }
    
    
    vector<int> findRedundantConnection(vector<vector<int>>& e) {
        
        
        int n=e.size()+1;
        vi p(n);
        
        for(int i=0;i<n;i++)
            p[i]=i;
        
        
        for(int i=0;i<e.size();i++){
            
            int x=find(e[i][0],p);
            int y=find(e[i][1],p);
            
            if(x==y){
                return e[i];
            }
            
            Union(x,y,p);
            
        }
        
        return {0};
    }
    
};
