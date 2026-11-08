class NumArray {
public:
    vector<int> numsPrefix;

    NumArray(vector<int>& nums) {
        this->numsPrefix = nums;
        for (int i=1; i < nums.size(); i++)
        {
            numsPrefix[i] += numsPrefix[i-1]; 
        }
    }
    
    int sumRange(int left, int right) {
        if (left == 0)
        {
            return numsPrefix[right];
        }

        return numsPrefix[right] - numsPrefix[left-1];
    }
};

/**
 * Your NumArray object will be instantiated and called as such:
 * NumArray* obj = new NumArray(nums);
 * int param_1 = obj->sumRange(left,right);
 */
