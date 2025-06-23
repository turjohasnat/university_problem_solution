class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.length() != t.length())
            return false;

        unordered_map<char, int> freq;
        for(char u : s)
            freq[u]++;

        for(char u : t){
            if(freq[u] == 0)
                return false;

            freq[u]--;
        }

        return true;
    }
};
