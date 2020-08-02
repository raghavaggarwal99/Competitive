class Solution {
public:
    
    
    int dist(int point[2]) {
        return point[0] * point[0] + point[1] * point[1];
    }
    
    vector<vector<int>> kClosest(vector<vector<int>>& point, int K) {
        
        
         int N = point.size();
        
        // cout<<points[0]<<endl;
        
        vector<int> dists(N);
        
        for (int i = 0; i < N; ++i)
            dists[i] = point[i][0] * point[i][0] + point[i][1] * point[i][1];

       sort(dists.begin(), dists.end());
        
        int distK = dists[K-1];

        vector<vector<int>> ans;
        int t = 0;
        for (int i = 0; i < N; ++i)
            if (point[i][0] * point[i][0] + point[i][1] * point[i][1] <= distK){
                ans.push_back(point[i]);
            //     ans[t][0] = point[i][0];
            //     ans[t][1] = point[i][1];
            //     t++;
            }
        return ans;
        
        
    }

};
