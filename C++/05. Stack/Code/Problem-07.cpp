class Solution {
public:
    int minOperations(vector<string>& logs) {
        stack<string> folders;
        
        for (string& log : logs) {
            if (log == "../") {
                if (!folders.empty())
                    folders.pop();
            } 
            else if (log == "./")
                continue;
            else
                folders.push(log);

        }
        
        return folders.size();
    }
};
