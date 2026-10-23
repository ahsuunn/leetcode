class Solution {
public:
    string convertToTitle(int columnNumber) {
        string out{""};
        
        while(columnNumber > 0)
        {
            columnNumber --;

            int remainder = columnNumber % 26;
            out.push_back('A' + remainder);

            columnNumber /= 26;
        }
        reverse(out.begin(), out.end());

        return out;
    }
};
