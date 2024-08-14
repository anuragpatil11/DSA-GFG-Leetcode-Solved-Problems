class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int buyStock=prices[0];
        int profit=0;
        for(int i=1;i<prices.size();i++){
            if(buyStock>prices[i]){
                buyStock=prices[i];
            }
            
            profit=max(profit,(prices[i]-buyStock));
        }
//        int buyPrice = prices[0];
//         int profit = 0;

//         for (int i = 1; i < prices.size(); i++) {
//             if (buyPrice > prices[i]) {
//                 buyPrice = prices[i];
//             }

//             profit = max(profit, prices[i] - buyPrice);
//         }

        return profit;     
    }
};