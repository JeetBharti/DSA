class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n=prices.size();
        int small=prices[0];
        int large=0;
        int result=0;
        int idx=0;

        for(int i=1;i<n;i++){
            if(prices[i]<small){
                small=prices[i];
                idx=i;
            }
            result=prices[i]-small;
            if(large<result){
                large=result;
            }
        }
        return large;
    }
};