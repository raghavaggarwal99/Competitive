void comb(vector<int> A, int B, int st, vector<vector<int> > &v, vector<int> v1)
{
    
    if(B<0){
        return;
    }
    
    if(B == 0)
    {
        sort(v1.begin(),v1.end());
        v.push_back(v1);
        return;
    }
    
    
    
    for(int i=st; i<A.size(); i++)
    {
        v1.push_back(A[i]);
        comb(A, B-A[i], i+1, v, v1);
        v1.pop_back();
    }
}

vector<vector<int> > Solution::combinationSum(vector<int> &A, int B) {
   
     vector<vector<int> > v;
    vector<int> v1;
    
    sort(A.begin(), A.end());
    
    comb(A, B, 0, v, v1);
    
    v.erase(unique(v.begin(), v.end()), v.end());
    return v;
    
    
}

