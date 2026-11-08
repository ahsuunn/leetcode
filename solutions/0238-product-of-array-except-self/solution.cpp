class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();

        vector<int> leftProduct(n);
        leftProduct[0] = 1;
        for (int i = 1; i < n; i++)
        {
            leftProduct[i] = nums[i-1] * leftProduct[i-1];
        }

        vector<int> rightProduct(n);
        rightProduct[n-1] = 1;
        for (int i = n-2; i >= 0; i--)
        {
            rightProduct[i]  = nums[i+1] * rightProduct[i+1];
        }

        vector<int> product(n);
        for (int i = 0; i < n; i++)
        {
            product[i] = leftProduct[i] * rightProduct[i];
        }

        return product;
    }
};
