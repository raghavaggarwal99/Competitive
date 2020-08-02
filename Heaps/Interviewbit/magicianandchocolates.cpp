int Solution::nchoc(int A, vector<int> &B) {
    
    priority_queue<long long int> pq;
    
    
    for(long long int i=0; i<B.size(); i++){
        pq.push((long long int)B[i]);
        // cout<<pq.top()<<endl;
    }
    
    long long int sum=0;
    long long int q=pow(10, 9) + 7;
    
    while(A>0){
        long long int v=pq.top();
        sum=(sum+v%q)%q;
        // cout<<sum<<endl;
        pq.pop();
        pq.push(floor(v/2));
        A--;
        
    }
    
    return sum;
    
    
    
    
}

