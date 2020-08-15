vector<int> Solution::solve(vector<int> &A, vector<int> &B, int C) {
    
    
    sort(A.begin(), A.end());
    
    sort(B.begin(), B.end());
    
    
    int n=A.size();
 
    vector<int> ans;
    
    priority_queue<pair<int, pair<int,int>>> pq;
    
    set<pair<int,int>> s;
    
    pq.push(make_pair(A[n-1]+B[n-1], make_pair(n-1,n-1)));
    
    
    s.insert(make_pair(n-1,n-1));
   
   for(int w=0; w<C; w++){
       
       pair<int, pair<int, int> > temp=pq.top();
       
       ans.push_back(temp.first);
       
       pq.pop();
       
       int i= temp.second.first;
       int j=temp.second.second;
       
       int y= A[i-1]+B[j];
       
       pair<int,int> index= make_pair(i-1,j);
       
       if(s.find(index)==s.end()){
           pq.push(make_pair(y,index));
           
           s.insert(index);
       }
       
       
        y= A[i]+B[j-1];
       
       index= make_pair(i,j-1);
       
       if(s.find(index)==s.end()){
           pq.push(make_pair(y,index));
           
           s.insert(index);
       }
       
       
       
       
   }
    
    return ans;
    
    
}

