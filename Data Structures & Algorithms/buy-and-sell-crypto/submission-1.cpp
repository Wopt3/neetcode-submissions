class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int l=0;
        int max_val=0;
        for(int r=1;r<prices.size();r++){
            if(prices[l]<prices[r]){
                max_val=max(max_val,(prices[r]-prices[l]));
            }
            else{
                l=r;
            }
        }
        return max_val;
    }
};
