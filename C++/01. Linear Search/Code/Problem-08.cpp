//C++ Solution:

class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        unordered_map<int, int> freq;
        for(int i = 0; i < arr.size(); i++){
            freq[arr[i]]++;
        }

        unordered_set<int> unique_num;
        for(auto u : freq){
            unique_num.insert(u.second);
        }

        if(freq.size() == unique_num.size())
            return true;
        else 
            return false;
    }
};
