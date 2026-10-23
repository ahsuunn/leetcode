class Solution {
public:
    int hammingWeight(int n) {
        string bin {intToBin(n)};
        int count {0};

        for (auto c: bin)
        {
            if (c == '1')
            {
                count++;
            }
        }

        return count;
    }

    string intToBin(int angka)
    {
        string out {};
        int sisa {0};
    
        while (angka != 0)
        {
            sisa = angka % 2;
            angka /= 2;
            out.append(1, sisa + '0');
        }
    
        return out;
    }
};
