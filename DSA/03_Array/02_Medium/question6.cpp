 ----------------------------------------------brute----------------------------------
 class Solution {
public:
    int maxProfit(vector<int>& prices) {
      int temp=0;
      for(int i=0;i<prices.size();i++){
        for(int j=i+1;j<prices.size();j++){
            if(prices[j]-prices[i]>temp){
                temp=prices[j]-prices[i];
            }
        }
    }
     if(temp==0){
            return 0;
        }
         return temp;
    }
};
--------------------------------------------optimal------------------------------------
class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int left = 0;
        int right = 1;
        int max_profit = 0;

        while (right < prices.size()) {
            if (prices[left] < prices[right]) {
                int profit = prices[right] - prices[left];
                max_profit = max(max_profit, profit);
            } else {
                         left = right;                                           // Found a price lower than our buy price; 
                                                                   // move left directly to this new lower price point.
            }
               right++;                                                 // Always move right forward to check the next price
        }

        return max_profit;
    }
};
--------------------------------------------Optimal of Striver------------------------------------------
#include <vector>
#include <algorithm>

class Solution {
public:
    int maxProfit(std::vector<int>& prices) {
        int mini = prices[0];
        int maxProfit = 0;
        int n = prices.size();

        for (int i = 1; i < n; i++) {
            int cost = prices[i] - mini;
            maxProfit = std::max(maxProfit, cost);
            mini = std::min(mini, prices[i]);
        }

        return maxProfit;
    }
};
//*Finding the small value and increasing the price[i], so the profit is maximum