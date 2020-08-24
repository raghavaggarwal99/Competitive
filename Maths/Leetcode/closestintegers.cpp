class Solution {
public:
    vector<int> closestDivisors(int num) {
        
        vector<int> ans;
        
        int a=num+1;
        int b=num+2;
        
        int q=-1;
        int v=-1;
        
        int t=-1;
        int y=-1;
        
        
        
        for(int i=sqrt(a); i>=1; i--){
            
            if(a%i==0){
                q=i;
                v=a/i;
                break;
            }
            
        }
        
        
        for(int i=sqrt(b); i>=1; i--){
            
            if(b%i==0){
                t=i;
                y=b/i;
                break;
            }
            
        }
        
        if(v-q<y-t){
            ans.push_back(q);
            ans.push_back(v);
        }
        else{
             ans.push_back(t);
            ans.push_back(y);
        }
        
        return ans;
        
    }
};
