#include<stack>
#include<unordered_map>

class Solution {
public:
    bool isValid(string s) {
        unordered_map<char, char> matching = {
            {')', '('},
            {'}', '{'},
            {']', '['}
        };

        stack<char> stk;
        for(auto u : s){
            if(u == '(' || u == '{' || u == '['){
                stk.push(u);
            }
            else{
                if(stk.empty() || stk.top() != matching[u]){
                    return false;
                }
                stk.pop();
            }
        }

        return stk.empty();
    }
};
