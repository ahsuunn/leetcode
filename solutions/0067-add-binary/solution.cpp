class Solution {
public:
    string addBinary(string a, string b) {
        std::string output {""};
        bool isRemainder {false};
        
        while(a.length() > 0 && b.length() > 0)
        {
            if (a.back() == '1' && b.back() == '1')
            {
                if (isRemainder)
                {
                    output.insert(0, 1, '1');
                }
                else
                {
                    output.insert(0, 1, '0');
                }
                isRemainder = true;
            }
            
            else if (a.back() == '0' && b.back() == '0')
            {
                if (isRemainder)
                {
                    output.insert(0, 1, '1');
                    isRemainder = false;
                }
                else
                {
                    output.insert(0, 1, '0');
                }
            }
            
            else // either a or b is 1 
            {
                if (isRemainder)
                {
                    output.insert(0, 1, '0');
                }
                else
                {
                    output.insert(0, 1, '1');
                    isRemainder = false;
                }
            }
            a.pop_back();
            b.pop_back();
        }

        while (a.length())
        {
            if (isRemainder)
            {
                if (a.back() == '1')
                {
                    output.insert(0, 1, '0');
                }
                if (a.back() == '0')
                {
                    output.insert(0, 1, '1');
                    isRemainder = false;
                }
            }
            else
            {
                output.insert(0, 1, a.back());
            }
            a.pop_back();
        }

        while (b.length())
        {
            if (isRemainder)
            {
                if (b.back() == '1')
                {
                    output.insert(0, 1, '0');
                }
                if (b.back() == '0')
                {
                    output.insert(0, 1, '1');
                    isRemainder = false;
                }
            }
            else
            {
                output.insert(0, 1, b.back());
            }
            b.pop_back();
        }

        if (isRemainder)
        {
            output.insert(0, 1, '1');
            isRemainder = false;
        }
        
        return output;
    }
};
