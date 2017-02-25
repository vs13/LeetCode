class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n = prices.size();
        if(n == 0)
            return 0;
        int minPrice = prices[0];
        int mx = 0;
        for(int i = 1; i<n ; i++) {
            mx = max(mx, prices[i]-minPrice);
            minPrice = min(minPrice,prices[i]);
        }
        return mx;
    }
};