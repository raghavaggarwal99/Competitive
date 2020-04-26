bool isPalindrome(string s, int i, int j)
{
    while (i<j)
    {
        if (s[i] == s[j])
        {
            ++i; --j;
        }
        else
            return false;
    }
    return true;
}

void backtracking(string& s, int start, vector<string>& row, vector<vector<string> >& res)
{
    if (start == s.length())
    {
        res.emplace_back(row); 
        return;
    }
       
    for (int i= start; i< s.length(); i++)
    {        
        if (isPalindrome(s, start, i))
        {
            row.push_back(s.substr(start, i-start+1));
            backtracking(s, i+1, row, res);
            row.pop_back();
        }
    }
}

vector<vector<string> > Solution::partition(string A) {
    vector<string> row;
    vector<vector<string> > res;
    backtracking(A, 0, row, res);
    return res;
}
