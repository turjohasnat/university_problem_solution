class Solution {
public:
    int parent[26];

    int find(int x) {
        if (parent[x] != x)
            parent[x] = find(parent[x]);
        return parent[x];
    }

    void unite(int x, int y) {
        int px = find(x);
        int py = find(y);
        if (px != py) {
            parent[px] = py;
        }
    }

    bool equationsPossible(vector<string>& equations) {
        for (int i = 0; i < 26; ++i)
            parent[i] = i;

        for (const string& eq : equations) {
            if (eq[1] == '=') {
                int a = eq[0] - 'a';
                int b = eq[3] - 'a';
                unite(a, b);
            }
        }

        for (const string& eq : equations) {
            if (eq[1] == '!') {
                int a = eq[0] - 'a';
                int b = eq[3] - 'a';
                if (find(a) == find(b)) {
                    return false;
                }
            }
        }

        return true;
    }
};
