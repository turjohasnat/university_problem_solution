class Solution {
public:
    int minimumCoins(vector<int>& prices) {
        int n = prices.size();
        vector<int> dp(n + 1, INT_MAX);
        dp[0] = 0;
        
        for (int i = 0; i < n; ++i) {
            int cost = dp[i] + prices[i];
            int next = min(i + 1 + (i + 1), n);
            for (int j = i + 1; j <= next; ++j) {
                if (dp[j] > cost) {
                    dp[j] = cost;
                }
            }
        }
        
        return dp[n];
    }
};
