class Solution {
public:
    int maximumCount(vector<int>& nums) {
        int maxPos = 0, maxNeg = 0;
        for(int num : nums){
            if(num > 0){
                maxPos++;
            }
            else if(num < 0){
                maxNeg++;
            }
        }
        return max(maxPos, maxNeg);
    }
};
