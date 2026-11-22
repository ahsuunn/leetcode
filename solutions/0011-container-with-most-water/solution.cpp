class Solution {
public:
    int maxArea(vector<int>& height) {
        int i = 0;
        int j = height.size()-1;

        int area = 0;
        int ans = 0;

        while (i < j)
        {
            area = countArea(i, height[i], j, height[j]);

            ans = max(area, ans);
            if(height[i] < height[j])
            {
                i++;
            }
            else{
                j-- ;
            }
        }
        return ans;

    }

    int countArea(int x1, int h1, int x2, int h2)
    {
       int width = x2 - x1;

       return width * min(h1, h2);
    }
};
