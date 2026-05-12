class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        double max = 0;
        double currSum = 0;
        for(int i = 0; i < k; i++){
            currSum += nums[i];
        }
        max = currSum;
        for(int i = 1; i <= nums.size()-k; i++){
            currSum -= nums[i-1];
            currSum += nums[i+k-1];
            if(currSum > max){
                max = currSum;
            }
        }
        return max/k;
    }
};
