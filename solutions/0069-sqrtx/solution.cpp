class Solution {
public:
    int mySqrt(int x) {
        if (x==0 || x == 1)
        {
            return x;
        }      

        int left {0};
        int middle {-1};
        int right {x};

        while(left <= right)
        {
            middle = left + (right - left) / 2;
            
            if ((long) x > (long) middle * middle)
            {
                left = middle + 1; 
            }
            else if ((long) x == (long) middle * middle)
            {
                return middle;
            }
            else // x < middle * middle 
            {
                right = middle - 1;
            }           
        }
        return std::round(right);  
    }
};
