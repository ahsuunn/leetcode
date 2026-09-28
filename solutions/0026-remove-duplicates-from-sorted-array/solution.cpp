class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int currInt = nums[0], k = 0, index = 0;
        for(int i = 0; i < nums.size(); i++){
            if(i == 0){
                k++;
                index++;
            }
            else{
                if(currInt == nums[i]){
                    continue;
                }else{
                    currInt = nums[i];
                    nums[index] = currInt;
                    k++;
                    index++;
                }
            }

        }
        return k;
    }
};
