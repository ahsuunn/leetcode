class Solution {
public:
    int minAddToMakeValid(string s) {
        int count {0}; // Positive for left bracket, negative for right bracket
        int negCount {0};
        
        for (char c: s)
        {
            if (c == '(')
            {
                count++;
            }
            else // c == ')'
            {
                if (count <= 0)
                {
                    negCount++;
                }
                else
                {
                    count--;
                }
            }   
        }

        return abs(count) + negCount;
    }
};
