class Solution {
public:
    string convert(string s, int numRows) {
        if (numRows == 1 || numRows > s.length())
        {
            return s;
        }
        
        std::vector<std::vector<char>> out(numRows);
        int y {0};
        int d {1};
        bool isStraight {true};
        
        for(char c: s)
        {
            out[y].push_back(c);    
            if(y == 0)
            {
                d = 1;
            }
            else if (y == numRows - 1)
            {
                d = -1;
            }
            y += d;
        }

        string result;
        for (auto& row: out)
        {
            for (char c: row)
            {
                result += c;
            }
        }
        return result;
    }
};
