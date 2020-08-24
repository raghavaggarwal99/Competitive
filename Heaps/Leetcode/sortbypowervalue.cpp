class Solution {
public:
    
    int solve(int n){
        
        int count=0;
        
        if(n==1){
            return count;
        }
        
        while(n>1){
            
            if(n==1){
                break;
            }
            
            if(n%2==0){
                n=n/2;
            }
            
            else if(n%2!=0){
                n=3*n+1;
                // count++;
            }
            count++;

        }
        

        
        return count;
        
        
    }
    
    int getKth(int A, int B, int k) {
        
        
        vector<pair<int,int>> v;
        
        
        for(int i=A; i<=B; i++){
            
            int key= solve(i);
            cout<<key<<endl;
            
            v.push_back(make_pair(key,i));
            
        }
        
        
        sort(v.begin(), v.end());
        
        
        return v[k-1].second;
        
        
        
        
        
        
    }
};
