class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_set<char> substr {};
        int max {0};
        int left {0};

        for (int right = 0; right < s.length(); right++)
        {
            // Check the most right character first but don't add it yet
            // If the current substring has duplicate on the right 
            // Remove the most left one until there's no duplicate left
            while(substr.contains(s[right]))
            {
                substr.erase(s[left]);
                left++;
            }

            // After no more duplicate found in the window then add the
            // character to the window
            substr.insert(s[right]);
            max = std::max(max, right - left + 1);
        }

        return max;
    }
};
