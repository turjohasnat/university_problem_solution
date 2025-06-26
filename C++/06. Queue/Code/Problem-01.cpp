class Solution {
public:
    int firstUniqChar(string s) {
        unordered_map<char, int> count;
        queue<pair<char, int>> q;
      
        for (int i = 0; i < s.size(); ++i) {
            char c = s[i];
            count[c]++;
            q.push({c, i});
            
            while (!q.empty() && count[q.front().first] > 1) {
                q.pop();
            }
        }
        
        if (q.empty())
            return -1;
        else
            return q.front().second;
    }
};
