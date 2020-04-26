void comb(int n, int k, int st, vector<vector<int> > &v, vector<int> v1)
{
    if(k == 0)
    {
        v.push_back(v1);
        return;
    }
    for(int i=st; i<=n; i++)
    {
        v1.push_back(i);
        comb(n, k-1, i+1, v, v1);
        v1.pop_back();
    }
}

vector<vector<int> > Solution::combine(int n, int k) 
{
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details

    vector<vector<int> > v;
    vector<int> v1;
    
    comb(n, k, 1, v, v1);
    sort(v.begin(), v.end());
    
    return v;
}


