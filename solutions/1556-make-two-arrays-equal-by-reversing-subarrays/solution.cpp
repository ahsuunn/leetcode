class Solution {
public:
    bool canBeEqual(vector<int>& target, vector<int>& arr) {
        vector<int> count(1001, 0);
        
        int n = arr.size();
        int uniqueCount {0};
        for (int i = 0; i < n; i++)
        {
            if (count[target[i]]++ == 0) uniqueCount++;

            if (count[arr[i]]-- == 1) uniqueCount--; 
        }

        return uniqueCount==0;
    }
};
