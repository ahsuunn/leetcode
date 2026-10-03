class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        bool isRemainder {false};
        vector<int> output {};
        auto pos = output.begin();

        for(int i = digits.size()-1; i >= 0; i--)
        {
            int temp = digits[i];
            temp = i == digits.size()-1 ? temp + 1 : temp;
            
            if (isRemainder)
            {
                temp++;
                isRemainder = false;
            }

            if (temp >= 10)
            {
                isRemainder = true;
                pos = output.insert(pos, temp%10);
            }
            else
            {
                pos = output.insert(pos, temp);
            }
        }
        if(isRemainder)
        {
            output.insert(pos, 1);
        }

        return output;
    }
};
