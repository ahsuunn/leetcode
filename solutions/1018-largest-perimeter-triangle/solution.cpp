class Solution {
public:
    int largestPerimeter(vector<int>& nums) {
        int length = nums.size(), a, b, c, largest = 0;
        sort(nums.begin(), nums.end());
        for(int i = length - 1; i > 1; i--){
            if(nums[i] < nums[i-1] + nums[i-2]){
                largest = nums[i] + nums[i-1] + nums[i-2];
                break;
            }
        }
        return largest;
    }      
};
