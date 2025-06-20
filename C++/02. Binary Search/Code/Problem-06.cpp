class Solution {
    public:
     int minEatingSpeed(vector<int>& piles, int h) {
       int left = 1;
       int right = ranges::max(piles);
   
       while (left < right) {
         int mid = (left + right) / 2;
         if (eatHours(piles, mid) <= h)
            right = mid;
         else
           left = mid + 1;
       }
   
       return left;
     }
   
    private:
     
     int eatHours(const vector<int>& piles, int m) {
       return accumulate(piles.begin(), piles.end(), 0,
                         [&](int subtotal, int pile) {
         return subtotal + (pile - 1) / m + 1;  
       });
     }
   };
