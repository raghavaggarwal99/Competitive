vector<int> Solution::slidingMaximum(const vector<int> &A, int B) {
    
    // https://www.geeksforgeeks.org/sliding-window-maximum-maximum-of-all-subarrays-of-size-k/
    
    
     vector<int> v;
    deque<int> dq;
        
    for(int i=0; i<A.size(); i++)
    {
        if(!dq.empty() && dq.front() == i-B){
            // cout<<dq.front()<<":"<<i<<endl;
            dq.pop_front();
        }
        
        while(!dq.empty() && A[i] >= A[dq.back()])
            dq.pop_back();
            
        dq.push_back(i);
        
        if(i >= B-1) v.push_back(A[dq.front()]);
    }
    
    return v;
   
//   https://www.youtube.com/watch?v=m-Dqu7csdJk
    
    
}

