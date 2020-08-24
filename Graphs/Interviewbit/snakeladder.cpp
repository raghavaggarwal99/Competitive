int Solution::snakeLadder(vector<vector<int> > &A, vector<vector<int> > &B) {
    
   
    queue<pair<int,int>> q;
    
    bool *visited=new bool[101];
    
    int *ladder=new int[101];
    
    int *snakes=new int[101];
    
    for(int i=0; i<=100; i++){
        visited[i]=false;
        ladder[i]=-1;
        snakes[i]=-1;
    }
    
    for(int i=0; i<A.size(); i++){
        ladder[A[i][0]]=A[i][1];
    }
    
     for(int i=0; i<B.size(); i++){
        snakes[B[i][0]]=B[i][1];
    }
    
    
    q.push(make_pair(1,0));
    visited[1]=true;
    
    
    while(!q.empty()){
        
        
        int temp=q.front().first;
        int level= q.front().second;        
        q.pop();
        
        
        if(temp==100){
            return level;
        }
        
        for(int i=temp+1; i<=temp+6; i++){
            
            if(!visited[i] && i<=100){
                
                if(ladder[i]!=-1){
                    visited[ladder[i]]=true;
                    
                    q.push(make_pair(ladder[i], level+1));
                }
                else if(snakes[i]!=-1){
                    
                     visited[snakes[i]]=true;
                     
                    q.push(make_pair(snakes[i], level+1));
                }
                
                else{
                    visited[i]=true;
                    q.push(make_pair(i, level+1));
                }
                
                
            }
            
            
            
        }
        
    }
    
    return -1;
    
    
    
}

