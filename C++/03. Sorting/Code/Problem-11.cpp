class Solution {
public:
    int findFinalValue(vector<int>& nums, int original) {
         while (true) {
            bool found = false;

            for (int num : nums){
                if (num == original) {
                    found = true;
                    break;
                }
            }

            if (!found)
                break;

            original *= 2;
        }

        return original;
    }
};
