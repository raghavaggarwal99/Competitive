class Solution {
public:
    int nthUglyNumber(int n) {
        
        
        if(n==1){
            return 1;
        }
 
    
        vector<long long int> ans;
        // vector<int> set;
        
        set<long long int > st;
        st.insert(1);

        
        while(!st.empty()){

           long long int curr = *st.begin();

            st.erase(st.begin());

            ans.push_back(curr);

            if(ans.size()==n)
                break;

            long long int p1 = curr*2;
            long long int p2 = curr*3;
            long long int p3 = curr*5;
            st.insert(p1);
            st.insert(p2);
            st.insert(p3);

        }

  
        return ans[n-1];
        
       
        

    }
};
