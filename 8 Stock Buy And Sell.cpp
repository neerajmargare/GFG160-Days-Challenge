//8 Stock Buy And Sell - Max one Transaction Allowed
class Solution {
  public:
    int maximumProfit(vector<int> &prices) {
        int maxElement=0,maxProfit=0;
        for(int i=prices.size()-1;i>=0;i--){
            maxElement=max(maxElement,prices[i]);
            maxProfit=max(maxProfit,maxElement-prices[i]);
        }
        return  maxProfit; 
    }
};