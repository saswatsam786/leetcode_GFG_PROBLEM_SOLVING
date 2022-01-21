class Solution {
public:
    int maxProfit(vector<int>& prices) {
        
        int diff;
        int mini=prices[0];
        int res=0;
        for(int i=1;i<prices.size();i++){
            mini=min(prices[i],mini);
            diff=prices[i]-mini;
            res=max(res,diff);
        }
        
        return res;
        
    }
};