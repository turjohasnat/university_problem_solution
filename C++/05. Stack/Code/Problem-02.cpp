class Solution {
public:
    vector<int> finalPrices(vector<int>& prices) {
        stack<int> s;
        vector<int> answer(prices.size());

        for (int i = 0; i < prices.size(); i++) {
            while (!s.empty() && prices[i] <= prices[s.top()]) {
                answer[s.top()] = prices[s.top()] - prices[i];
                s.pop();
            }
            s.push(i);
        }

        while (!s.empty()) {
            answer[s.top()] = prices[s.top()];
            s.pop();
        }

        return answer;
    }
};
