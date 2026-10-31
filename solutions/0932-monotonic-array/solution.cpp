class Solution {
public:
    bool isMonotonic(vector<int>& nums) {
        bool isUp {false};
        int temp {nums[0]};
        bool isInit {false};

        for (int i = 1; i < nums.size(); i++)
        {
            if(!isInit)
            {
                if (temp == nums[i])
                {
                    temp = nums[i];    
                }
                else{
                    if (temp < nums[i])
                    {
                        isUp = true;
                    }
                    else
                    {
                        isUp = false;
                    }
                    isInit = true;
                    temp = nums[i];
                }
            }
            else
            {
                if (isUp && nums[i] < temp)
                {
                    return false;
                }
                else if(!isUp && nums[i] > temp)
                {
                    return false;
                }
                else
                {
                    temp = nums[i];
                }
            }
        }

        return true;
    }
};
