class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int ans = 0;
        int lowest = 100;
        
        for (int price : prices) {
            lowest = min(price, lowest);
            ans = max(price - lowest, ans);
        }

        return ans;
    }
};
