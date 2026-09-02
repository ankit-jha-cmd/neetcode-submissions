class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int maxprof=0;
        int buy=0;
        for(int i=1;i<prices.size();i++){
            if(prices[buy]>prices[i])buy=i;
            maxprof=max(prices[i]-prices[buy], maxprof);
        }
        return maxprof;
    }
};
