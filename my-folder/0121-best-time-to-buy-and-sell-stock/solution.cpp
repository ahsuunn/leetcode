class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int profit = 0, buy, sell, temp, lowestPrice = INT_MAX, highestPrice;
        for(auto price : prices){
            lowestPrice = min(lowestPrice, price);
            profit = max(profit, price - lowestPrice); 
        }
        return profit;
    }
};
