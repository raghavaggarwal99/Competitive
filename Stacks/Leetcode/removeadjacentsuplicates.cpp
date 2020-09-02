class Solution {
public:
    string removeDuplicates(string s, int k) {
        
         stack<pair<char,int>>st;
        int n = s.length();
        
        
        for(int i=0;i<n;i++)
        {
            if(st.empty() || st.top().first!=s[i])
                st.push({s[i],1});
            else
            {
                int c = 1;
                while(st.empty()==false && st.top().first == s[i])
                {
                    c += st.top().second;
                    st.pop();
                }
                c = c%k;
                if(c!=0)
                    st.push({s[i],c});
            }
        }
        
        
        string ans = "";
        while(!st.empty())
        {
            for(int i=0;i<st.top().second;i++)
                ans+= st.top().first;
            st.pop();
        }
        
        
        
        reverse(ans.begin(),ans.end());
        return ans;
        
        
        
        
        
    }
};
