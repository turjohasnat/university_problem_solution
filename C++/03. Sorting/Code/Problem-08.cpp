class Solution {
public:
    int largestInteger(int num) {
        string s = to_string(num);
        vector<int> odd, even;

        for (char c : s) {
            int digit = c - '0';

            if (digit % 2 == 1)
                odd.push_back(digit);
            else
                even.push_back(digit);
        }

        sort(odd.rbegin(), odd.rend());
        sort(even.rbegin(), even.rend());
        
        int odd_ptr = 0, even_ptr = 0;
        string result;

        for (char c : s) {
            int digit = c - '0';
            
            if (digit % 2 == 1)
                result += to_string(odd[odd_ptr++]);
            else
                result += to_string(even[even_ptr++]);
        }

        return stoi(result);
    }
};
