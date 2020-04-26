void solve(vector<int> A, int st, vector<vector<int> > &v, vector<int> v1)
{
    
    v.push_back(v1);
    for(int i=st; i<A.size(); i++)
    {
        v1.push_back(A[i]);
        solve(A, i+1, v, v1);
        v1.pop_back();
    }
}

vector<vector<int> > Solution::subsets(vector<int> &A) {
    
    vector<vector<int> > v;
    vector<int> v1;
    
     sort(A.begin(),A.end());
    
    solve(A,0, v, v1);
    return v;


}

