void Solution::sortColors(vector<int> &A) {
 
 priority_queue<int, vector<int>, greater<int>> pq;
 
     for(int i=0; i<A.size(); i++){
         pq.push(A[i]);
     }
     A.clear();
        
    while(!pq.empty()){
         A.push_back(pq.top());
         pq.pop();
     }
    
    
    
    
}

