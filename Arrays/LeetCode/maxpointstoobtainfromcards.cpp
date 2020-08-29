class Solution {
public:
    
    
    int maxScore(vector<int>& cardPoints, int k) {
        
        
        int res = 0, n = cardPoints.size();
        
        vector<int> leftKSum(k + 1, 0), righKSum(k + 1, 0);
        
        for (int i = 1; i <= k; i++) {
            leftKSum[i] = leftKSum[i-1] + cardPoints[i - 1];
            righKSum[i] = righKSum[i-1] + cardPoints[n - i];
        }
        
        for (int i = 0; i <= k; i++)
            res = max(res, leftKSum[i] + righKSum[k - i]);

        return res;
    }
};


