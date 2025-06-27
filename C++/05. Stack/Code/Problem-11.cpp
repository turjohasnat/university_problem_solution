class Solution {
public:
    string clearDigits(string s) {
        stack<char> charStack;
    
        for (char c : s) {
            if (isdigit(c)) {
                if (!charStack.empty())
                    charStack.pop();
            } 
            else
                charStack.push(c);
        }
    
        string result;
        while (!charStack.empty()){
            result = charStack.top() + result;
            charStack.pop();
        }
        
        return result;
    }
};
