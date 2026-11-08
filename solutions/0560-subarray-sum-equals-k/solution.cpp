class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        vector<int> prefix = nums;
        int n = nums.size();

        for (int i = 1; i < nums.size(); i++)
        {
            prefix[i] += prefix[i-1];
        }

        int count {0};

        unordered_map<int, int> mp;

        for (int i = 0; i<n; i++)
        {
            if (prefix[i] == k)
            {
                count++;
            }

            if (mp.find(prefix[i] - k) != mp.end())
            {
                count+=mp[prefix[i]-k];
            }

            mp[prefix[i]]++;
        }

        return count;
    }

   
};
