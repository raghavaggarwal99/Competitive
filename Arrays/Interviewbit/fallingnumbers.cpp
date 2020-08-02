vector<int> Solution::solve(vector<vector<int> > &A) {
    
   int n = A.size();
    vector<int> qans(n);
    
    for(int i = 0; i < n; i++){
        int left = A[i][0];
        int size = A[i][1];
        int right = left + size;
        qans[i] += size;
        for(int j = i + 1; j < n; j++){
            int left2 = A[j][0];
            int size2 = A[j][1];
            int right2 = left2 + size2;
            if(left2 < right && left < right2){
                qans[j] = max(qans[j], qans[i]);
            }
        }
    }
    
    // for(int i = 0; i < n; i++){
    //     cout<<qans[i]<<" ";
    // }
    
    
    vector<int> ans;
    int cur = -1;
    for(int i = 0; i < n; i++){
        int x=qans[i];
        cur = max(cur, x);
        ans.push_back(cur);
    }
    return ans;
    
    
    
    
    
    
    
    
}

