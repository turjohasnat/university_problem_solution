class Solution {
public:
    int timeRequiredToBuy(vector<int>& tickets, int k) {
        queue<pair<int, int>> q; 
        for (int i = 0; i < tickets.size(); ++i) {
            q.push({i, tickets[i]});
        }
    
        int time = 0;
        while (!q.empty()){
            pair<int, int> current = q.front();
            q.pop();

            time++;
            current.second--;

            if (current.first == k && current.second == 0)
                return time;

            if (current.second > 0)
                q.push(current);
    
        }

        return time;
    }
};
