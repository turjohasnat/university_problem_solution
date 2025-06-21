class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) {
        sort(g.begin(), g.end());
        sort(s.begin(), s.end());
        
        int child = 0, cookie = 0;
        int contentChildren = 0;
        int numChildren = g.size();
        int numCookies = s.size();
        
        while (child < numChildren && cookie < numCookies) {
            if (s[cookie] >= g[child]) {
                contentChildren++;
                child++;
                cookie++;
            } 
            else 
                cookie++;
        }
        
        return contentChildren;
    }
};
