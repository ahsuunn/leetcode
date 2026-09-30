class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_set<char> substr {};
        int max {0};
        int left {0};

        for (int right = 0; right < s.length(); right++)
        {
            while(substr.contains(s[right]))
            {
                substr.erase(s[left]);
                left++;
            }

            substr.insert(s[right]);
            max = std::max(max, right - left + 1);
        }

        return max;
    }
};