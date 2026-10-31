class Solution {
public:
    string addStrings(string num1, string num2) {
        string result {""};
        int carry {0};
        int i = num1.size() - 1;
        int j = num2.size() - 1;

        while (i >= 0 || j >= 0 || carry)
        {
            int dig1 = i >= 0 ? num1[i] - '0' : 0;
            int dig2 = j >= 0 ? num2[j] - '0' : 0;

            int total = dig1 + dig2 + carry;

            carry = total/10;

            result.push_back((total % 10) + '0');

            i--;
            j--;
        }

        reverse(result.begin(), result.end());

        return result;
    }
};
