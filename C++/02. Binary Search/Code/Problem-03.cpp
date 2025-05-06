//C++ Solution:

//Runtime: 0 ms
//Memory Usage: 13.5 MB

class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int lb = 0, ub = nums.size();

        while(lb < ub){
            int mid = (lb + ub)/2;

            if(nums[mid] == target)
                return mid;
            else if(nums[mid] < target){
                lb = mid + 1;
            }
            else{
                ub = mid;
            }
        }
        return lb; 
    }
};
