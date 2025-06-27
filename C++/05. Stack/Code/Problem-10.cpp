class Solution {
public:
    bool backspaceCompare(string s, string t) {
        return buildString(s) == buildString(t);
    }

private:
    string buildString(const string &str) {
        stack<char> st;
        for (char c : str) {
            if (c != '#') {
                st.push(c);
            } else if (!st.empty()) {
                st.pop();
            }
        }
        string result;
        while (!st.empty()) {
            result += st.top();
            st.pop();
        }
        reverse(result.begin(), result.end());
        return result;
    }
};
