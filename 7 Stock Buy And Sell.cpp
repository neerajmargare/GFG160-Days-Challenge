//7.Stock Buy And Sell - Multiple Transaction is Allowed
class Solution {
  public:
    int maximumProfit(vector<int> &prices) {
        int profit = 0; // Initialize total profit to 0
        
        // Iterate through the array up to the second-last element
        for (int i = 0; i < prices.size() - 1; i++) {
            // If the price on the next day is higher than the current day
            if (prices[i + 1] > prices[i])
                profit += prices[i + 1] - prices[i]; // Add the profit to the total profit
        }
        
        return profit; // Return the maximum profit
    }
};
