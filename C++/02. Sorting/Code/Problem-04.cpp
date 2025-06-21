class Solution {
public:
    vector<string> findRelativeRanks(vector<int>& score){
        int n = score.size();
        vector<string> result(n);

        for(int i = 0; i < n; i++){
            int placement = 1;
            
            for(int j = 0; j < n; j++){
                if(score[i] < score[j])
                    placement++;
            }

            if(placement == 1)
                result[i] = "Gold Medal";
            else if(placement == 2)
                result[i] = "Silver Medal";
            else if(placement == 3)
                result[i] = "Bronze Medal";
            else{
                result[i] = to_string(placement);
            }
        }

        return result;
    }
};
