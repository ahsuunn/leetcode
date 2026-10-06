class Solution {
public:
    int smallestIndex(vector<int>& nums) {
        int idx {-1};

        for (int i = 0; i < nums.size(); i++)
        {
            std::string temp = to_string(nums[i]);
            int tempInt {0};

            for (char c : temp)
            {
                tempInt += c - '0';
            }

            if (tempInt == i)
            {
                return i;
            }
        }

        return idx;
    }
};
