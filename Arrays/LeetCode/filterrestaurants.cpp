class Solution {
public:
    vector<int> filterRestaurants(vector<vector<int>>& A, int veganFriendly, int maxPrice, int maxDistance) {
        
        vector<pair<int,int>> temp;
        
        vector<int> ans;
        
        for(int i=0; i<A.size(); i++){
            
            if(A[i][3]<=maxPrice && A[i][4]<=maxDistance){
                
                if(veganFriendly==1 && A[i][2]==veganFriendly){
                    temp.push_back(make_pair(A[i][1], A[i][0]));
                }
                else if(veganFriendly==0){
                    temp.push_back(make_pair(A[i][1], A[i][0]));
                }
            }
            
        }
        
        
        sort(temp.begin(), temp.end());
        
        reverse(temp.begin(), temp.end());
        
        for(int i=0; i<temp.size(); i++){
            ans.push_back(temp[i].second);
        }
        
        
        return ans;
        
        
    }
};
