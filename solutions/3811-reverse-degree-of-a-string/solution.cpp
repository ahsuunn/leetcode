class Solution {
public:
    int reverseDegree(string s) {
        int out {0};

        for (int i = 0; i < s.size(); i++)
        {
            //  s[i] - 2 * '0' <- Is to get the real index of the string
            // Since '0' is 48 that means that 'a' - '0' = 97-48 = 49
            // So multiplying by 2 means that we get the real index

            // So (27 - (s[i] - 2 * '0')) is trying to get the reverse index by deducting 27 by the real index

            // (i+1) is to just get the index of the string
            out += (27 - (s[i] - 2 * '0')) * (i+1);
        }

        return out;
    }
};
