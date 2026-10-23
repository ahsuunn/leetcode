class Solution {
public:
    int singleNumber(vector<int>& nums) {
        set<int> keys{};
        
        for (auto num: nums)
        {
            if (!keys.contains(num))
            {
                keys.insert(num);
            }
            else
            {
                keys.erase(num);
            }
        }

        return *keys.begin();
    }
};
