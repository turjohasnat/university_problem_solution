class Solution {
public:
    vector<string> sortPeople(vector<string>& names, vector<int>& heights) {
        int n = names.size();
        for(int i = 0; i < n - 1; i++){
            int max_index = i;
            for(int j = i + 1; j < n; j++){
                if(heights[j] > heights[max_index])
                    max_index = j;
            }

            swap(heights[i], heights[max_index]);
            swap(names[i], names[max_index]);
        }

        return names;
    }
};
