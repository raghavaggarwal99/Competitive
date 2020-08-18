int maxProfit1(int n, int k, const vector<int> prices) 
{ 
    int ans = 0, buy = 0, sell = 0; 
  
    stack<pair<int, int> > transaction; 
    priority_queue<int> profits; 
  
    while (sell < n) { 
  
        buy = sell; 
  
        // Find the farthest decreasing span 
        // of prices before prices rise 
        while (buy < n - 1 
               && prices[buy] >= prices[buy + 1]) 
            buy++; 
  
        sell = buy + 1; 
  
        // Find the farthest increasing span 
        // of prices before prices fall again 
        while (sell < n 
               && prices[sell] >= prices[sell - 1]) 
            sell++; 
  
        // Check if the current buying price 
        // is greater than that 
        // of the previous transaction 
        while (!transaction.empty() 
               && prices[buy] 
                      < prices[transaction.top().first]) { 
            pair<int, int> p = transaction.top(); 
  
            // Store the profit 
            profits.push(prices[p.second - 1] 
                         - prices[p.first]); 
  
            // Remove the previous transaction 
            transaction.pop(); 
        } 
  
        // Check if the current selling price is 
        // less than that of the previous transactions 
        while (!transaction.empty() 
               && prices[sell - 1] 
                      > prices[transaction.top().second - 1]) { 
            pair<int, int> p = transaction.top(); 
  
            // Store the new profit 
            profits.push(prices[p.second - 1] 
                         - prices[buy]); 
            buy = p.first; 
  
            // Remove the previous transaction 
            transaction.pop(); 
        } 
  
        // Add the new transactions 
        transaction.push({ buy, sell }); 
    } 
  
    // Finally store the profits 
    // of all the transactions 
    while (!transaction.empty()) { 
        profits.push( 
            prices[transaction.top().second - 1] 
            - prices[transaction.top().first]); 
        transaction.pop(); 
    } 
  
    // Add the highest K profits 
    while (k && !profits.empty()) { 
        ans += profits.top(); 
        profits.pop(); 
        --k; 
    } 
  
    // Return the maximum profit 
    return ans; 
} 
  
// Driver code 

int Solution::maxProfit(const vector<int> &A) {
    
    
    
    return maxProfit1(A.size(), 2, A);
    

    
}

