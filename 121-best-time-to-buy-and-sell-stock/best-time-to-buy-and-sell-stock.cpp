class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int min_prize=INT_MAX;
        int max_profit=0;
        for(int i:prices){
            min_prize=min(min_prize,i);
            max_profit=max(max_profit,i-min_prize);
        }
        return max_profit;
    }  
};