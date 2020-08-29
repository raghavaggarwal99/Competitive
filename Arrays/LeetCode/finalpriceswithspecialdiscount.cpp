class Solution {
public:
    vector<int> finalPrices(vector<int>& prices) {
        
       int len = prices.size();
        
        stack<int> st;
      
        for(int i = 0; i < len; i++){
            
          
            while(!st.empty() && prices[st.top()] >= prices[i]){
              
                prices[st.top()] -= prices[i];
                st.pop();
            }
            // push the index in the stack
            st.push(i);
        }
        return prices;
        
        
        
        
    }
};
