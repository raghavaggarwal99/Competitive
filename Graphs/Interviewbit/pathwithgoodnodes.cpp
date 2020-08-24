int Solution::solve(vector<int> &A, vector<vector<int> > &B, int C) {
    
    
    vector<vector<int> > adj(A.size()+1);
    
    for(int i=0;i<B.size();i++){
        adj[B[i][0]].push_back(B[i][1]);
        adj[B[i][1]].push_back(B[i][0]);
    }

    vector<bool> visited(A.size()+1);
    
    vector<int> good(A.size()+1,0);
    
    int ans = 0;
    
    queue<int> q;
    
    good[1]=A[0];
    
    q.push(1);
    
    visited[1]=true;
    
    while(!q.empty()){
        
        int temp=q.front();
        q.pop();
        
        
        int prev=q.size();
        
        for(int i=0; i<adj[temp].size(); i++){
            
            int v=adj[temp][i];
            
            if(!visited[v]){
                
                q.push(v);
                visited[v]=true;
                
                good[v]=good[temp]+A[v-1];
                
            }
 
        }
        
        if(prev==q.size() && good[temp]<=C){
            // cout<<q.front()<<" "<< q.back()<<endl;
            
            ans++;
        }
        
        
        
    }
   
   
   
    return ans;


}

