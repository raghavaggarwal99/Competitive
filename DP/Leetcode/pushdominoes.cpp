class Solution {
public:
    string pushDominoes(string dom) {
        
        
         int n = dom.size();
        
        vector<int> left(n, 1e9), right(n, 1e9);
        
        for(int i=0;i<n;i++){
            if(dom[i]=='R') right[i] = 0;
            
            else if(dom[i]=='L'){
                continue;
            }
            else{
               if(i>0) right[i] = min(1+right[i-1], right[i]);
            }
        }
        
        
//         for(int i=0; i<n; i++){
//             cout<<right[i]<<" ";
//         }
        
//         cout<<endl;
        
        for(int i=n-1;i>=0;i--){
            if(dom[i]=='L') left[i] = 0;
            else if(dom[i]=='R') continue;
            else{
                if(i<n-1) left[i] = min(1+left[i+1], left[i]);
            }
        }
        
//         for(int i=0; i<n; i++){
//             cout<<left[i]<<" ";
//         }
        
//         cout<<endl;
        
        
        
        string res = "";
        
        for(int i=0;i<n;i++){
            
            if(dom[i]=='L'){
                res.push_back('L');
            }
            
            else if(dom[i]=='R'){
                res.push_back('R');
            }
            else{
                
                if(left[i]==right[i]){
                    res.push_back('.');
                }
                
                else if(left[i]<right[i]){
                    res.push_back('L');
                }
                else{
                    res.push_back('R');
                }
                
            }
        }
        
        return res;
        
        
        
        
        
        
        
        
    }
};
