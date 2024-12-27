class Solution {
public:
    int maxProfit(vector<int>& prices) {

        if(prices.empty()){ 
            return 0;
        }

        int minp = prices[0];
        int maxp = 0;

        for (int i=1;i<prices.size();i++) {
            if (prices[i] < minp) {
                minp = prices[i];
            } 
            else {
                maxp = max(maxp, prices[i] - minp);
            }
        }

        return maxp;
    }
};