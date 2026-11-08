class Solution {
public:
    int findMaxLength(vector<int>& nums) {
        unordered_map<int, int> seen{{0, -1}};

        int maxLen = 0;
        int sum = 0;
        for (int i =0; i < nums.size(); i++)
        {
            sum += nums[i] == 1 ? 1 : -1;
            if (seen.count(sum))
            {
                maxLen = max(maxLen, i - seen[sum]);
            }
            else 
            {
                seen[sum] = i;
            }
        }

        return maxLen;

    }
};
