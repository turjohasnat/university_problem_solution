class Solution {
public:
    int minimumOperations(vector<int>& nums) {
        unordered_set<int> num;
        
        for(auto u : nums){
            if(u != 0)
                num.insert(u);
        }

        return num.size();
    }
};
