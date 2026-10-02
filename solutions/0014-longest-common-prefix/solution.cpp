class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        // Take the first string in the vector as the default prefix
        std::string commonPrefix {strs[0]};
        int prefixLength {static_cast<int>(strs[0].length())};
        int idx {1};

        // Iterate through all the vector of string while the prefix is not empty
        while(prefixLength != 0 && idx < strs.size())
        {
            // Iterate through each char compare it with the current prefix
            for (int i=0; i < prefixLength; i++)
            {
                // If the char didnt match update prefix as the new substring index
                // and update the length of the prefix
                if (strs[idx][i] != commonPrefix[i])
                {
                    commonPrefix = commonPrefix.substr(0,i);
                    prefixLength = commonPrefix.length();
                    break;
                }
            }
            // Update the index to move to the next string
            idx++;
        }   

        return commonPrefix;
    }
};
