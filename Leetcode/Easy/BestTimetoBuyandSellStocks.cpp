// Min ko pta karo uske hisaabh se profit nikaalo , max ki zar

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int profit = 0;
        int min = 0;
        for(int i = min+1 ; i<prices.size() ; i++)
        {
            if(prices[min]>=prices[i])
            {
                min = i;
                continue;
            }
            profit = max(prices[i]-prices[min],profit);
        }
        return profit;
    }
};