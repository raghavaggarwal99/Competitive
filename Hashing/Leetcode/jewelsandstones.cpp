class Solution {
public:
    int numJewelsInStones(string J, string S) {
        
        unordered_map<char,int> x;
        
        for(int i=0; i<S.length(); i++){
            x[S[i]]++;
        }
        
        int count=0;
        
        unordered_map<char,int> y;
        
         for(int i=0; i<J.length(); i++){
             if(y[J[i]]==0){
                count+=x[J[i]];
                 y[J[i]]=1;
             }
        }
        
        return count;
        
    }
};
