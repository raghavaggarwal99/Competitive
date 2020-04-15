int Solution::maximumGap(const vector<int> &A) {
    
    
   unordered_map<int,int> x;
   
    vector<pair<int,int>> copy;
    for(int i=0; i<A.size(); i++){
        copy.push_back(make_pair(A[i],i));
    }
    
    sort(copy.begin(), copy.end());
    
    int j=copy.size()-1;
    int r=copy[j].second;
    int maxx=0;
    
   for(int k=j-1; k>=0; k--){
       maxx=max(maxx, r-copy[k].second);
       r=max(r, copy[k].second);
   }
    
    return maxx;
    
    
    
    
    
}

