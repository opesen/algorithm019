class Solution {
public:
    int maxProfit(std::vector<int>& prices) {
        int sum=0; //贪心算法
        for(int i = 0; i < prices.size() - 1; i++) {
            sum += (prices[i] < prices[i+1]) ? (prices[i+1] - prices[i]) : 0;
        }

        return sum;
    }
};
