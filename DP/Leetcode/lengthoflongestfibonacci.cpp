class Solution {
public:
    int lenLongestFibSubseq(vector<int>& A) {
        
        
        unordered_set<int> st;
        int n=A.size();
        
        for(int i=0;i<n;i++)
            st.insert(A[i]);
        
        
        int z,x,y;
        int count,maxs=0;
        
        for(int i=0;i<n;i++)
        {
            for(int j=i+1;j<n;j++)
            {
                x=A[i];
                y=A[j];
                count=2;
                
                while(st.find(x+y)!=st.end())
                {
                    z=y;
                    y=x+y;
                    x=z;
                    count++;
                }
                
                if(count!=2)
                {maxs=max(maxs,count);}
            }
            
        }
        
        
        return maxs;
        
        
    }
};
