class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int mi=prices[0],ma=0;
        for(int i=0;i<prices.size();i++)
        {
            mi=min(mi,prices[i]);
            ma=max(ma,prices[i]-mi);
        }
        return ma;
    }
};