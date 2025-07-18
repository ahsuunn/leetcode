class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        vector<bool> result;
        for(int i=0; i < candies.size(); i++){
            int currentKidCandies = candies[i] + extraCandies;
            for(int j = 0; j < candies.size(); j++){
                if(currentKidCandies < candies[j]){
                    result.push_back(false);
                    break;
                }
                else if(j == candies.size() - 1){
                    result.push_back(true);
                }
            }
        }
        return result;
    }
};
